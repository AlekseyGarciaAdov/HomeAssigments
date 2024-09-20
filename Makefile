CC=g++
CFLAGS=-c

myprog: main.o hello.o
	$(CC) main.cpp hello.cpp -o myprog
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp
clean:
	rm -rf *.o myprog

