# -*- Makefile -*-

USE_LMD_INPUT=1

CXXFLAGS+=-DCONTROL_INCLUDE -Wfatal-errors

OBJS += gamma3_user.o
