#########################################################
#  This is my Makefile
#########################################################

ifeq ($(DEBUG), 1)
SPECS =
override OPT = -Og
else
SPECS = -specs=nano.specs
override OPT = -O3
override BUILD_DIR = build/release
endif

override LDFLAGS = $(MCU) $(SPECS) -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

export C_DEFS

#########################################################
#  Include the actual Makefile that does all the work
#########################################################

include Makefile