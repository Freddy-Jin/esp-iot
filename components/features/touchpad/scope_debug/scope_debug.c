#include "esp_err.h"
#include "driver/uart.h"

static int8_t uart_used = -1;
static uint8_t scope_uart_num = 255;
static int scope_tx_io_num = 0;
static int scope_rx_io_num = 0;
static int scope_debug_baud_rate = 256000;
static unsigned char datascope_output_buffer[42] = {0};    // Data buff.

/**
 * @brief Translate a float data to four unsigned char data for uart TX.
 * @param target target float data address.
 * @param buf save translated data.
 * @param offset the start position in buf.
 * @return
 *     - void
 */
static void Float2Byte(float *target, unsigned char *buf, unsigned char offset)
{
    unsigned char *point;
    point = (unsigned char*)target;   //Get the address of float.
    buf[offset]   = point[0];
    buf[offset+1] = point[1];
    buf[offset+2] = point[2];
    buf[offset+3] = point[3];
}

/**
 * @brief Add data to channal buff.
 * @param Data target data.
 * @param Channel target channel (1 - 10).
 * @return
 *     - void
 */
static void datascope_get_channel_data(float data, unsigned char channel)
{
    if ( (channel > 10) || (channel == 0) ) {
        return;
    } else {
        switch (channel) {
            case 1:  Float2Byte(&data,datascope_output_buffer,1); break;
            case 2:  Float2Byte(&data,datascope_output_buffer,5); break;
            case 3:  Float2Byte(&data,datascope_output_buffer,9); break;
            case 4:  Float2Byte(&data,datascope_output_buffer,13); break;
            case 5:  Float2Byte(&data,datascope_output_buffer,17); break;
            case 6:  Float2Byte(&data,datascope_output_buffer,21); break;
            case 7:  Float2Byte(&data,datascope_output_buffer,25); break;
            case 8:  Float2Byte(&data,datascope_output_buffer,29); break;
            case 9:  Float2Byte(&data,datascope_output_buffer,33); break;
            case 10: Float2Byte(&data,datascope_output_buffer,37); break;
        }
    }
}

/**
 * @brief Transform float data to DataScopeV1.0 data format.
 * @param channel_num the number of channel that wait to be translated.
 * @return
 *     - The number of the UART TX data.
 */
static unsigned char datascope_data_generate(unsigned char channel_num)
{
    if ( (channel_num > 10) || (channel_num == 0) ) {
        return 0;
    } else {
        datascope_output_buffer[0] = '$';  //frame header
        switch(channel_num) {
            case 1:   datascope_output_buffer[5]  =  5; return  6; break;
            case 2:   datascope_output_buffer[9]  =  9; return 10; break;
            case 3:   datascope_output_buffer[13] = 13; return 14; break;
            case 4:   datascope_output_buffer[17] = 17; return 18; break;
            case 5:   datascope_output_buffer[21] = 21; return 22; break;
            case 6:   datascope_output_buffer[25] = 25; return 26; break;
            case 7:   datascope_output_buffer[29] = 29; return 30; break;
            case 8:   datascope_output_buffer[33] = 33; return 34; break;
            case 9:   datascope_output_buffer[37] = 37; return 38; break;
            case 10:  datascope_output_buffer[41] = 41; return 42; break;
        }
    }
    return 0;
}

/**
 * @brief Send touch sensor data to HMI in PC via UART.
 * @param uart_num Choose uart port (0, 1, 2).
 * @param data The addr of the touch sensor data.
 * @param channel_num The number of channel that wait to be translated.
 * @return
 *     - ESP_FAIL Error
 *     - The number of the UART TX data.
 */
int iot_tp_print_to_scope(float *data, unsigned char channel_num)
{
    uint8_t uart_num = scope_uart_num;

    if (uart_num >= UART_NUM_MAX) {
        return ESP_FAIL;
    }
    if ( (channel_num > 10) || (channel_num == 0) || (NULL == data) ) {
        return ESP_FAIL;
    }
    for(uint8_t i = 0 ; i < channel_num; i++)  {
        datascope_get_channel_data(data[i] , i+1); //  write data x into channel 1~10.
    }
    unsigned char out_len = datascope_data_generate(channel_num); //  Generate n number data.
    unsigned char *out_data = datascope_output_buffer;
    // Init uart.
    if(uart_num != uart_used) {
        return 0;
    } else {
        uart_wait_tx_done(uart_num, portMAX_DELAY);
        return uart_write_bytes(uart_num, (const char *)out_data, out_len);
    }
}

/**
  * @brief  Enable scope debug function. Print the touch sensor raw data to "DataScope" tool via UART.
  *         "DataScope" tool is touch sensor tune tool. User can monitor the data of each touch channel,
  *         evaluate the touch system's touch performance (sensitivity, SNR, stability, channel coupling)
  *         and determine the threshold for each channel.
  *
  * @attention 1. Choose a UART port that will only be used for scope debug.
  * @attention 2. Use this feature only during the testing phase.
  * @attention 3. "DataScope" tool can be downloaded from Espressif's official website.
  *
  * @param  uart_num The uart port to send touch sensor raw data.
  * @param  tx_io_num set UART TXD IO.
  * @param  rx_io_num set UART RXD IO.
  * @param  baud_rate set debug port baud rate.
  *
  * @return
  *     - ESP_OK: succeed
  *     - ESP_FAIL: the param uart_num is error
  */
esp_err_t iot_tp_scope_debug_init(uint8_t uart_num, int tx_io_num, int rx_io_num, int baud_rate)
{
    if (uart_num >= UART_NUM_MAX) {
        return ESP_FAIL;
    }
    scope_uart_num = uart_num;
    scope_tx_io_num = tx_io_num;
    scope_rx_io_num = rx_io_num;
    scope_debug_baud_rate = baud_rate;
    uart_config_t uart_config = {
        .baud_rate = scope_debug_baud_rate,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE
    };
    uart_param_config(uart_num, &uart_config);
    // Set UART pins using UART0 default pins i.e. no changes
    uart_set_pin(uart_num, scope_tx_io_num, scope_rx_io_num,
            UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
    uart_driver_install(uart_num, 1024, 2048, 0, NULL, 0);
    uart_used = uart_num;
    return ESP_OK;
}

void iot_tp_scope_debug_disable()
{
    scope_uart_num = 0xff;
}
