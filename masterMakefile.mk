#########################################################
#  This is my Makefile
#########################################################

TOP_BUILD_DIR = build

ifeq ($(DEBUG), 1)
SPECS =
override OPT = -Og
override BUILD_DIR = $(TOP_BUILD_DIR)/debug
else
SPECS = -specs=nano.specs
override OPT = -O3
override BUILD_DIR = $(TOP_BUILD_DIR)/release
endif

$(shell mkdir -p $(BUILD_DIR))

override LDFLAGS = $(MCU) $(SPECS) -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

export C_DEFS
export C_INCLUDES

#########################################################
#  Include the actual Makefile that does all the work
#########################################################

include Makefile

clean:
	-rm -fR $(TOP_BUILD_DIR)