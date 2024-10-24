CXX = g++
CXXFLAGS = -c

myprog: main.o text_file_operations.o
	$(CC) main.cpp text_file_operations.cpp -o myprog
main.o: main.cpp
	$(CC) $(CXXFLAGS) main.cpp
text_file_operations.o: text_file_operations.cpp rpn_calculator.h
	$(CC) $(CXXFLAGS) text_file_operations.cpp rpn_calculator.h
clean:
	rm -rf *.o myprog
run:
	./myprog
