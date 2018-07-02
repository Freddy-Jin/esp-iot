#
# Component Makefile
#

# componet standalone mode
ifndef CONFIG_IOT_SOLUTION_EMBED   

COMPONENT_ADD_INCLUDEDIRS := esp32-alink/include esp32-alink/adaptation/include
COMPONENT_SRCDIRS := esp32-alink/adaptation esp32-alink/application
ifdef CONFIG_ALINK_VERSION_EMBED
LIBS := alink_agent tfspal
endif
ifdef CONFIG_ALINK_VERSION_SDS
LIBS := alink_agent_sds tfspal
endif
COMPONENT_ADD_LDFLAGS += -L $(COMPONENT_PATH)/esp32-alink/lib \
                           $(addprefix -l,$(LIBS))

else

ifdef CONFIG_IOT_ALINK_ENABLE
COMPONENT_ADD_INCLUDEDIRS := esp32-alink/include esp32-alink/adaptation/include
COMPONENT_SRCDIRS := adaptation esp32-alink/application
ifdef CONFIG_ALINK_VERSION_EMBED
LIBS := alink_agent tfspal
endif
ifdef CONFIG_ALINK_VERSION_SDS
LIBS := alink_agent_sds tfspal
endif
COMPONENT_ADD_LDFLAGS += -L $(COMPONENT_PATH)/esp32-alink/lib \
                           $(addprefix -l,$(LIBS))
else
COMPONENT_ADD_INCLUDEDIRS := 
COMPONENT_SRCDIRS := 
endif

endif