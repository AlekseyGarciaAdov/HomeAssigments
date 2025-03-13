CC=g++
CFLAGS=-c

myprog: main.o Autobot.o Decepticon.o Dinobot.o Engine.o Transformer.o Weapon.o
	$(CC) main.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Engine.cpp Transformer.cpp Weapon.cpp -o myprog
	./myprog
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
Autobot.o: Autobot.cpp
	$(CC) $(CFLAGS) Autobot.cpp
Decepticon.o: Decepticon.cpp
	$(CC) $(CFLAGS) Decepticon.cpp
Dinobot.o: Dinobot.cpp
	$(CC) $(CFLAGS) Dinobot.cpp
Engine.o: Engine.cpp
	$(CC) $(CFLAGS) Engine.cpp
Transformer.o: Transformer.cpp
	$(CC) $(CFLAGS) Transformer.cpp
Weapon.o: Weapon.cpp
	$(CC) $(CFLAGS) Weapon.cpp

tests:
	$(CC) -std=c++11 -isystem /usr/include/gtest -pthread tests.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Weapon.cpp Engine.cpp /usr/src/googletest/googletest/lib/libgtest.a /usr/src/googletest/googletest/lib/libgtest_main.a -o tests
	./tests

clean:
	rm -rf *.o myprog
