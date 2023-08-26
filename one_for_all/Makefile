# Makefile that compile all source code include subfolder as a application
# with application name ${APP_NAME}
APP_NAME := app
INCLUDE_DIRS := inc
LIBRARY_DIRS :=
LIBRARIES :=


# the folow argument noneed to modify normally
CC := g++
CPPFLAGS += -std=c++11

SRC_FORDER := $(shell find . -maxdepth 1 -type d)
SRCS := $(foreach dir, $(SRC_FORDER),  $(wildcard ${dir}/*.cpp))
OBJS := ${SRCS:.cpp=.o}

CPPFLAGS += $(foreach includedir,$(INCLUDE_DIRS),-I$(includedir))
LDFLAGS += $(foreach librarydir,$(LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(LIBRARIES),-l$(library))

.PHONY : all clean

all : $(APP_NAME)

%.o : %.cpp
	$(CC) ${CPPFLAGS} -c $^ -o $@

$(APP_NAME) : $(OBJS)
	$(CC) $(OBJS) ${LDFLAGS} -o $(APP_NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(APP_NAME)