ESP32 IoT Solution Overview
===========================

Solutions
---------

-  `Deep-sleep low power
   solutions <./documents/low_power_solution/readme_en.md>`__
   `[中文] <./documents/low_power_solution/readme_cn.md>`__

   -  [Current Consumption Test for ESP32 in Deep sleep]
   -  [ESP32 Low-Power Management Overview]
   -  [ESP32 ULP Co-processor and Assembly Environment Setup]

-  `Light-sleep low power solutions
   overview <./documents/DFS_and_light_sleep/readme_en.md>`__
   `[中文] <./documents/DFS_and_light_sleep/readme_cn.md>`__

   -  [ESP32 DFS test manual]
   -  [ESP32 Light-sleep features]
   -  [ESP32 Light-sleep test manua]

-  `Touch Sensor Application
   Note <./documents/touch_pad_solution/touch_sensor_design_en.md>`__
   `[中文] <./documents/touch_pad_solution/touch_sensor_design_cn.md>`__
-  `Security and Factory
   Flow <./documents/security_solution/readme_en.md>`__
   `[中文] <./documents/security_solution/readme_cn.md>`__

   -  [ESP32 secure and encrypt]
   -  [Download Tool GUI Instruction]

Evaluation Board Series
-----------------------

-  `ESP32\_ULP\_EB\_V1 Evaluation
   Board <./documents/evaluation_boards/readme_en.md>`__
   `[中文] <./documents/evaluation_boards/readme_cn.md>`__
-  `ESP32-Sense kit
   Board <./documents/evaluation_boards/readme_en.md>`__
   `[中文] <./documents/evaluation_boards/readme_cn.md>`__

   -  ESP32 Touch Sensor development kit.

-  `ESP-Prog board <./documents/evaluation_boards/readme_en.md>`__
   `[中文] <./documents/evaluation_boards/readme_cn.md>`__

   -  Firmware download and JTAG debug tool.

ESP32 IoT Example List:
-----------------------

-  `ESP32 Pedestrian Flow Monitoring
   introduction <examples/check_pedestrian_flow>`__

   -  The example demonstrates how to use ESP32 to calculate pedestrian
      flow in the Wi-Fi sniffer mode.
   -  Keywords: **WiFi sniffer OneNet MQTT**

-  `ESP32 Empty Project <examples/empty_project>`__

   -  It provides a framework for users to develop any projects.

-  `Ethernet-WiFi data transmission <examples/eth2wifi>`__

   -  An example that enables Ethernet-to-WiFi data forwarding function.
   -  Keywords: **Ethernet WiFi**

-  `ESP32 OLED screen panel <examples/oled_screen_module>`__

   -  The example demonstrates how to use ESP32 to drive a OLED screen
      and to read sensor in low power mode.
   -  Keywords: **SSD1306 Deep-sleep BH1750**

-  `ESP32 Smart Device to Cloud Framework <examples/smart_device>`__

   -  It provides a framework for a ESP32 smart device (smart plug,
      smart light, etc) to connect and communicate with a cloud service.
   -  Keywords: **SmartLight SmartPlug Alink Joylink**

-  `ESP32 Touch Sensor Example <examples/touch_pad_evb>`__

   -  An example for the ESP32 touch sensor development kit,
      ESP32-Sense, which is used to evaluate and develop ESP32 touch
      sensor system.
   -  Keywords: **TouchSensor ESP32-Sense**

-  `ESP32 ULP Co-processor Reads Hall Sensor
   Example <examples/ulp_examples/ulp_hall_sensor>`__

   -  It provides an example of the ESP32 ULP co-processor reading the
      on-chip Hall sensor in low-power mode.
   -  Keywords: **ULP Deep-sleep Built-in-Sensor HallSensor Assembly**

-  `ESP32 ULP Co-processor Operates RTC GPIO
   Example <examples/ulp_examples/ulp_rtc_gpio>`__

   -  An example of operating RTC GPIO with the ESP32 ULP co-processor.
   -  Keywords: **ULP Deep-sleep RTC-GPIO Assembly**

-  `ESP32 ULP Co-processor Reads Temperature Sensor
   Example <examples/ulp_examples/ulp_tsens>`__

   -  An example of the ESP32 ULP co-processor reading the on-chip
      temperature sensor in low-power mode.
   -  Keywords: **ULP Deep-sleep Built-in-Sensor TemperatureSensor
      Assembly**

-  `ESP32 ULP Co-processor Watering
   Example <examples/ulp_examples/ulp_watering_device>`__

   -  An example of implementing the ESP32 ULP co-processor in a
      watering device.
   -  Keywords: **ULP Deep-sleep SAR-ADC RTC-GPIO Assembly**

-  `ESP32 ULP Co-processor SAR-ADC
   Example <examples/ulp_examples/ulp_adc>`__

   -  An example of using SAR\_ADC to read NTC thermistor voltage and
      calculate temperature in ULP mode.
   -  Keywords: **ULP Deep-sleep SAR-ADC Assembly**

-  `ESP32 ULP Co-processor BitBang I2C
   Example <examples/ulp_examples/ulp_i2c_bitbang>`__

   -  An example of using RTC-GPIO bitbanged I2C to read BH1750 light
      sensor in ULP mode.
   -  Keywords: **ULP Deep-sleep RTC-GPIO BITBANG I2C Assembly**

-  `ESP32 ULP Co-processor BitBang SPI
   Example <examples/ulp_examples/ulp_spi>`__

   -  An example of using RTC-GPIO bitbanged SPI to read MS5611 sensor
      in ULP mode.
   -  Keywords: **ULP Deep-sleep RTC-GPIO BITBANG SPI Assembly**
      ----------------------------------------------------------

Components
----------

Features
~~~~~~~~

`TouchPad <./components/features/touchpad>`__ - Driver and example of
using different types of touch pad.
`Infrared <./components/features/infrared>`__ - Driver and framework of
using infrared remote control. ### General fucntions
`Button <./components/general/button>`__ - Driver and example of using
buttons and keys. `Debugs <./components/general/debugs>`__ - Provides
different commands for debugging via UART.
`LED <./components/general/led>`__ - Driver and example of using LED,
which provides such APIs as to blink with different frequency.
`Light <./components/general/light>`__ - Driver and example of using PWM
to drive a light, which provides such APIs as to control several
channels of LED. `OTA <./components/general/ota>`__ - Driver and example
of upgrading firmware from the given URL.
`Param <./components/general/param>`__ - Driver and example of saving
and loading data via NVS flash. `Power
Meter <./components/general/power_meter>`__ - Driver and example of a
single-phase energy meter such as BL0937 or HLW8012.
`Relay <./components/general/relay>`__ - Driver and example of a relay
with different driving modes. `Weekly
timer <./components/general/weekly_timer>`__ - Driver and example of a
weekly timer to trigger events at some certain moment in each week. ###
I2C Sensors `APDS9960 <./components/i2c_devices/sensor/apds9960>`__ -
Driver and example of reading APDS9960, which is an ambient light photo
Sensor. `BH1750 <./components/i2c_devices/sensor/bh1750>`__ - Driver and
example of reading BH1750 light sensor (GY-30 module).
`BME280 <./components/i2c_devices/sensor/bme280>`__ - Driver and example
of reading BME280, which is an pressure and temperature Sensor.
`HDC2010 <./components/i2c_devices/sensor/hdc2010>`__ - Driver and
example of reading HDC2010, which is a low power temperature and
humidity sensor. `HTS221 <./components/i2c_devices/sensor/hts221>`__ -
Driver and example of reading HTS221 temperature and humidity sensor.
`LIS2DH12 <./components/i2c_devices/sensor/lis2dh12>`__ - Driver and
example of reading LIS2DH12, which is a 3-axis accelerometer.
`MVH3004D <./components/i2c_devices/sensor/mvh3004d>`__ - Driver and
example of reading MVH3004D temperature and humidity sensor.
`VEML6040 <./components/i2c_devices/sensor/veml6040>`__ - Driver and
example of reading VEML6040, which is a light UV sensor. ### I2C Devices
`AT24C02 <./components/i2c_devices/others/at24c02>`__ - Driver and
example of driving AT24C02, which is an eeprom storage.
`CH450 <./components/i2c_devices/others/ch450>`__ - Driver and example
of driving CH450, which is a 7-segment LED driver.
`HT16C21 <./components/i2c_devices/others/ht16c21>`__ - Driver and
example of driving HT16C21, which is a LED driver.
`IS31FL3XXX <./components/i2c_devices/others/is31fl3xxx>`__ - Driver and
example of driving is31fl3xxx series chips, which are light effect LED
driver chips. `MCP23017 <./components/i2c_devices/others/mcp23017>`__ -
Driver and example of using mcp23017, which is a 16-bit I/O expander.
`SSD1306 <./components/i2c_devices/others/ssd1306>`__ - Driver and
example of using ssd1306, which is a 132 x 64 dot matrix OLED/PLED
segment driver chip. ### Motor `Servo <./components/motor/servo>`__ -
Driver and example of driving servo motors.
`A4988 <./components/motor/stepper/a4988>`__ - Driver and example of
driving A4988, which is a stepper motor driver. ### Network Abstract
`MQTT <./components/network/mqtt>`__ - Driver and example of using MQTT
client, which is a light-weight IoT protocol.
`TCP <./components/network/tcp>`__ - API and example of using TCP server
and client in C++. `UDP <./components/network/udp>`__ - API and example
of using UDP in C++. `Alink <./components/platform/alink>`__ - API and
example of connecting and communicating with Alink cloud service. ###
SPI Devices `E-ink display <./components/spi_devices/epaper>`__ - API
and example of driving and controlling SPI E-ink screen. `LCD
screen <./components/spi_devices/lcd>`__ - API and example of driving
and controlling SPI LCD. `XPT2046 Touch
screen <./components/spi_devices/touch_screen>`__ - API and example of
driving and controlling SPI Touch Screen. ### WiFi Abstract `ESP-TOUCH
for smart-config <./components/wifi/smart_config>`__ - Abstract APIs and
example of configuring devices via esp-touch. `WiFi connection abstract
APIs <./components/wifi/wifi_conn>`__ - Abstract APIs and example of
WiFi station connecting to router.

Build system and dependency
---------------------------

-  We can regard IoT solution project as a platform that contains
   different device drivers and features
-  ``Add-on project``: If you want to use those drivers and build your
   project base on the framework, you need to include the IoT components
   into your project.

   ::

       PROJECT_NAME := empty_project
       #If IOT_SOLUTION_PATH is not defined, use relative path as default value
       IOT_SOLUTION_PATH ?= $(abspath $(shell pwd)/../../)
       include $(IOT_SOLUTION_PATH)/Makefile
       include $(IDF_PATH)/make/project.mk

   As we can see, in the Makefile of your project, you need to include
   the Makefile under $(IOT\_SOLUTION\_PATH) directory so that the build
   system can involve all the components and drivers you need.

   ``Note: In this way, the build system will replace the IDF_PATH with the directory of idf repository in submodule during the build process.``

   If you don't want the replacement to happen(which means to use the
   ESP\_IDF value from your system environment), you can modify as the
   following Makefile does:

   ::

       PROJECT_NAME := empty_project
       #If IOT_SOLUTION_PATH is not defined, use relative path as default value
       IOT_SOLUTION_PATH ?= $(abspath $(shell pwd)/../../)
       include $(IOT_SOLUTION_PATH)/components/component_conf.mk
       include $(IDF_PATH)/make/project.mk

-  ``Stand-alone component``: if you just want to pick one of the
   component and put it into your existing project, you just need to
   copy the single component to your project components directory. But
   you can also append the component list in your project Makefile like
   this:

   ::

       EXTRA_COMPONENT_DIRS += $(IOT_SOLUTION_PATH)/components/the_one_you_want_to_use

-  ``Components control``: Usually we don't need all the device drivers
   to be compiled into our project, we can choose the necessary ones in
   menuconfig:

   ::

       make menuconfig --> IoT Solution settings --> IoT Components Management 

   Those components that are not enabled, will not be compiled into the
   project, which alos means, you need to enable the components you
   would like to use.

Framework
---------

-  ``components``

   -  small drivers of different divices like button and LED
   -  drivers of sensors
   -  drivers of different I2C devices
   -  friendly APIs of WiFi and OTA

-  ``Documents``:

   -  Documentations of some important features
   -  Instruction of some different solutions

-  ``Examples``:

   -  Example project using this framework

-  ``Submodule``:

   -  esp-idf works as submodule here

-  ``tools``:

   -  different tools and scripts
   -  unit-test project

   ::

       ├── Makefile
       ├── README.md
       ├── components
       ├── documents
       ├── examples
       │   └── check_pedestrian_flow
       │   └── empty_project
       │   └── eth2wifi
       │   └── oled_screen_module
       │   └── smart_device
       │   └── touch_pad_evb
       │   └── ulp_rtc_gpio
       │   └── ulp_watering_device
       ├── submodule
       │   └── esp-idf
       └── tools
           └── unit-test-app

Usage
-----

-  This code is based on esp-idf project.
-  This repository contains esp-idf code as submodule.
-  To clone this repository by **git clone --recurisve
   https://github.com/espressif/esp-iot-solution.git**
-  Change to the directory of examples (such as examples/smart\_device)
   in esp-iot-solution, run ``make menuconfig`` to configure the
   project.
-  Compiling the Project by ``make all``

       ... will compile app, bootloader and generate a partition table
       based on the config.

-  Flashing the Project
-  Flash the binaries by ``make flash``

       | This will flash the entire project (app, bootloader and
       partition table) to a new chip. The settings for serial port
       flashing can be configured with ``make menuconfig``.
       | You don't need to run ``make all`` before running
       ``make flash``, ``make flash`` will automatically rebuild
       anything which needs it.

-  Viewing Serial Output by ``make monitor`` target will use the
   already-installed
   `miniterm <http://pyserial.readthedocs.io/en/latest/tools.html#module-serial.tools.miniterm>`__
   (a part of pyserial) to display serial output from the ESP32 on the
   terminal console. Exit miniterm by typing Ctrl-].
-  To flash and monitor output in one pass, you can run:
   ``make flash monitor``
-  You can use unit-test in esp-iot-solution to test all the components.

##

.. raw:: html

   <h2 id="unit-test">

Unit-test

.. raw:: html

   </h2>

`back to top <#preparation>`__

To use uint-test, follow these steps:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-  Change to the directory of unit-test-app

   ::

       cd YOUR_IOT_SOLUTION_PATH/tools/unit-test-app

-  Use the default sdkconfig and compile unit-test-app by
   ``make IOT_TEST_ALL=1 -j8``

   ::

       make defconfig
       make IOT_TEST_ALL=1

-  Flash the images by ``make flash``

   ::

       make IOT_TEST_ALL=1 flash

-  Reset the chip and see the uart log using an uart tool such as
   minicom
-  All kinds of components will be shown by uart

   ::

       Here's the test menu, pick your combo:
       (1)     "Sensor BH1750 test" [bh1750][iot][sensor]
       (2)     "Button test" [button][iot]
       (3)     "Button cpp test" [button_cpp][iot]
       (4)     "Dac audio test" [dac_audio][iot][audio]
       (5)     "Debug cmd test" [debug][iot]
       (6)     "Deep sleep gpio test" [deep_sleep][rtc_gpio][current][iot]
       (7)     "Deep sleep touch test" [deep_sleep][touch][current][iot]
        ......

-  You need to send the index of the unit you want to test by uart. Test
   code of the unit you select will be run

##

.. raw:: html

   <h2 id="example">

Example

.. raw:: html

   </h2>

`back to top <#preparation>`__

To run the Examples projects, follow the steps below:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-  Change the directory to example
-  choose one example project you want to run, we take smart\_device
   here.
-  Change the directory to the example project under example directory,
   take smart\_device example as example here:

   ::

       cd YOUR_IOT_SOLUTION_PATH/example/smart_device

-  Run ``make menuconfig`` to set the project parameters in

   ::

       make menuconfig --> IoT Example - smart_device

-  Run ``make`` to compile the project, or ``make flash`` to compile and
   flash the module.

##

.. raw:: html

   <h2 id="empty_project">

Empty project

.. raw:: html

   </h2>

`back to top <#preparation>`__

-  You can start your own appliction code base on the empty-project.
-  By default, you just need to run ``make`` under the
   example/smart\_device directory. The makefile will set all the path
   by default.
-  Meanwhile, you can copy the example project to anywhere you want, in
   this case, you will have to set the ``IOT_SOLUTION_PATH`` so that the
   build system shall know where to find the code and link the files.
-  Set iot path:(replace 'YOUR\_PATH' below), you can also add
   ``IOT_SOLUTION_PATH`` to your environment PATH

   ::

           export IOT_SOLUTION_PATH = "YOUR_PATH/esp-iot-solution"