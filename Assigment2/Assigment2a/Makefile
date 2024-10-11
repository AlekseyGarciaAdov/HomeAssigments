CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = program

SRCS = main.cpp text_file_operations.cpp rpn_calculator.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
  $(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
  $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
  rm -f $(OBJS) $(TARGET)

.PHONY: all clean
