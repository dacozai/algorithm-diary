LIBS = `sdl2-config --libs` -lm
CFLAGS = `sdl2-config --cflags` \
						-O2 -Wall -Wextra -Werror -pedantic -Wfloat-equal -ansi $(LIBS)

DEBUG = -g3
OPTIM = -std=c++17 -O2
INCLUDES=-I./include
SRC_DIR := ./src
ARRAY_DIR := ./src/array
LINKLIST := ./src/linkedList
TREE := ./src/tree
DP := ./src/dp
STR := ./src/str

TEST_DIR := ./test
ARRAY_TEST_DIR := ./test/array
LINKLIST_TEST := ./test/linkedList
TREE_TEST := ./test/tree
DP_TEST := ./test/dp
STR_TEST := ./test/str

LIB_DIR := ./lib
SOURCES_IN := ./main.cpp $(SRC_DIR)/*.cpp $(ARRAY_DIR)/*.cpp $(LINKLIST)/*.cpp\
													 $(TEST_DIR)/*.cpp $(ARRAY_TEST_DIR)/*.cpp $(LINKLIST_TEST)/*.cpp\
													 $(TREE)/*.cpp $(TREE_TEST)/*.cpp $(DP)/*.cpp $(DP_TEST)/*.cpp\
													 $(STR)/*.cpp $(STR_TEST)/*.cpp $(LIB_DIR)/*.cpp

TARGET_IN = wtf 
POINTER_IN = ptr 


CC = g++

$(TARGET_IN): $(SOURCES_IN)
	rm -f $(TARGET_IN) 
	$(CC) $(SOURCES_IN) $(DEBUG) $(OPTIM) $(INCLUDES) -o $(TARGET_IN)

$(POINTER_IN): ./ow/pointer_notes.cpp
	rm -f $(POINTER_IN)
	$(CC) ./ow/pointer_notes.cpp $(DEBUG) -o $(POINTER_IN) 
	./$(POINTER_IN)

clean:
	rm -f $(TARGET_IN) 
