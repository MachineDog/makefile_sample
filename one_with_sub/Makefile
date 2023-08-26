# Makefile that compile all source code include subfolder as a application
# with application name ${APP_NAME}
APP_NAME := app
SUBDIRS = display myrandom src
INCLUDE_DIRS := $(shell pwd)/inc
LIBRARY_DIRS :=
LIBRARIES :=
BUILD_DIR = $(shell pwd)/../build


# the folow argument noneed to modify normally
CC := g++
CPPFLAGS += -std=c++11
CPPFLAGS += $(foreach includedir,$(INCLUDE_DIRS),-I$(includedir))

LDFLAGS += $(foreach librarydir,$(LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(LIBRARIES),-l$(library))

CUSTOM_ARGS := CPPFLAGS="${CPPFLAGS}" LDFLAGS=${LDFLAGS} BUILD_DIR=${BUILD_DIR} CC=${CC}

.PHONY : all clean install test

all:
	mkdir -p ${BUILD_DIR}
	for d in $(SUBDIRS); do [ -d $$d ] && $(MAKE) ${CUSTOM_ARGS} -C $$d all; done
	$(CC) $(shell find ${BUILD_DIR} -maxdepth 2 -type f) -o ${APP_NAME}

clean:
	rm -rf ${BUILD_DIR}
	rm -rf app

install:
	for d in $(SUBDIRS); do [ -d $$d ] && $(MAKE) -C $$d install; done