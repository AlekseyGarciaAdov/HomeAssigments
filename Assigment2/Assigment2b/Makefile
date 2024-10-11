CC=g++
CFLAGS=-c

myprog: main.o
	$(CC) main.cpp
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
clean:
	rm -rf *.o myprog
