# -*- Makefile -*-

USE_LMD_INPUT=1

OBJS += s412_user.o land_fcns.o land_user.o land_pos_sampler.o


# For the auto-pedestal-adjustment from ccdaqlib
CCDAQLIB_DIR=$(call TREE_UCESB_OR_HOME_SRC_DIR_OR_DIE,landdaq/ccdaqlib)
# For the common land directory
LAND_COMMON_DIR = ./../land_common

SRC_DIRS += $(LAND_COMMON_DIR)

UCESB_CPP_FLAGS += -I$(LAND_COMMON_DIR) -I.
USER_STRUCT_FILE = s412_user_struct.hh
CXXFLAGS += -DCONTROL_INCLUDE -DUSE_LOCAL_ERROR_HANDLING -I$(LAND_COMMON_DIR) -I$(CCDAQLIB_DIR) 

