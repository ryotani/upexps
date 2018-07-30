USE_LMD_INPUT=1

OBJS += 201810_s444_user.o

LAND_COMMON_DIR = ./../land_common

#
# For siderem_ext (common).
#
SST_DIR = $(UCESB_BASE_DIR)/dets/sst
$(eval $(call CHECK_DIRECTORY_EXIST,$(SST_DIR)))

include $(SST_DIR)/makefile_sst_ext.inc

INCLUDE_DIRS    += $(SST_DIR)
CXXFLAGS        += -I$(SST_DIR)
UCESB_CPP_FLAGS += -I$(SST_DIR)
PSDC_CPP_FLAGS  += -I$(SST_DIR)

SRC_DIRS += $(LAND_COMMON_DIR)

CXXFLAGS += -DCONTROL_INCLUDE -I$(LAND_COMMON_DIR)

DEPENDENCIES+=$(GENDIR)/mapping_fiber.hh $(GENDIR)/mapping_tofd.hh

$(GENDIR)/mapping_fiber.hh: $(GENDIR)/mapper
	@echo " MAPPING $@"
	@./$< > $@ 2> /dev/null

$(GENDIR)/mapping_tofd.hh: mapping_tofd_gen.bash 
	@echo " MAPPING $@"
	@./$< > $@

$(GENDIR)/mapper: mapper/main.c
	@echo " MAPPER  $@"
	@gcc -Wshadow -o $@ $<