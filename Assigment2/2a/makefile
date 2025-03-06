CC=g++
CFLAGS=-c

myprog: task2.o
	$(CC) task2.cpp -o myprog
	./myprog
task2.o: task2.cpp
	$(CC) $(CFLAGS) task2.cpp
clean:
	rm -rf *.o myprog

