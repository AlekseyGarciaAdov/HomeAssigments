CC=g++
CFLAGS=-o

myprog: main.o
	$(CC) main.cpp $(CFLAGS) myprog
	./myprog
main.o: main.cpp
	$(CC) -c main.cpp
clear:
	rm -rf *.o myprog
