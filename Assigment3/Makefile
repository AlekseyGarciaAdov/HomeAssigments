CC=g++
CFLAGS=-c

transform: main.o
	$(CC) main.cpp Autobot.cpp Decepticon.cpp VehicleTransformer.cpp Transformer.cpp -o transform
main.o: main.cpp Autobot.cpp Decepticon.cpp VehicleTransformer.cpp Transformer.cpp
	$(CC) $(CFLAGS) main.cpp Autobot.cpp Decepticon.cpp VehicleTransformer.cpp Transformer.cpp
Autobot.o: Autobot.cpp
	$(CC) $(CFLAGS) Autobot.cpp
Deception.o: Deception.cpp
	$(CC) $(CFLAGS) Deception.cpp
VehicleTransformer.o: VehicleTransformer.cpp
	$(CC) $(CFLAGS) VehicleTransformer.cpp
Transformer.o: Transformer.cpp
	$(CC) $(CFLAGS) Transformer.cpp
clean:
	rm -rf *.o transform
run:
	./transform
