USE_LMD_INPUT=1

LAND_COMMON_DIR = ../land_common
SRC_DIRS += $(LAND_COMMON_DIR)

UCESB_CPP_FLAGS += -I. -DUSING_MULTI_EVENTS

CXXFLAGS += -DCONTROL_INCLUDE