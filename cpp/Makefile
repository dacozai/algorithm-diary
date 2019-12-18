LIBS = `sdl2-config --libs` -lm
CFLAGS = `-std=c++17 sdl2-config --cflags` \
						-O2 -Wall -Wextra -Werror -pedantic -Wfloat-equal -ansi $(LIBS)

DEBUG = -g3
OPTIM = -O2
INCLUDES=-I./include
SRC_DIR := ./src
TEST_DIR := ./test
SOURCES_IN := ./main.cpp $(SRC_DIR)/*.cpp $(TEST_DIR)/*.cpp 

TARGET_IN = wtf 

CC = g++

$(TARGET_IN): $(SOURCES_IN)
	rm -f $(TARGET_IN) 
	$(CC) $(SOURCES_IN) $(DEBUG) $(OPTIM) $(INCLUDES) -o $(TARGET_IN)

clean:
	rm -f $(TARGET_IN) 
