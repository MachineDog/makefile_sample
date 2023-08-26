
SRCS := $(wildcard *.cpp)
OBJS := ${SRCS:.cpp=.o}

.PHONY : all clean

all : $(OBJS)

%.o : %.cpp
	mkdir -p ${BUILD_DIR}/display
	$(CC) ${CPPFLAGS} -c $^ -o ${BUILD_DIR}/display/$@
