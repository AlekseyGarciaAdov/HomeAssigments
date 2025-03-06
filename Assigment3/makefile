CC=g++
CFLAGS=-c

myprog: main.o Transformer.o Autobot.o Decepticon.o Dinobot.o Weapon.o Engine.o
	$(CC) -o transformers main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Weapon.cpp Engine.cpp
	./transformers

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
Transformer.o: Transformer.cpp
	$(CC) $(CFLAGS) Transformer.cpp
Decepticon.o: Decepticon.cpp
	$(CC) $(CFLAGS) Decepticon.cpp
Dinobot.o: Dinobot.cpp
	$(CC) $(CFLAGS) Dinobot.cpp
Weapon.o: Weapon.cpp
	$(CC) $(CFLAGS) Weapon.cpp
Engine.o: Engine.cpp
	$(CC) $(CFLAGS) Engine.cpp
clean:
	rm -rf *.o myprog
