all: lab7.o genMino.o MinoS.o MinoI.o MinoL.o MinoA.o MinoB.o Mino.o
	g++ -o lab7 lab7.o genMino.o MinoS.o MinoI.o MinoL.o Mino.o MinoA.o MinoB.o

lab7.o: genMino.h MinoS.h MinoI.h MinoL.h MinoA.h MinoB.h Mino.h lab7.cpp
	g++ -c lab7.cpp

Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoL.o: MinoL.h MinoL.cpp Mino.h
	g++ -c MinoL.cpp

MinoI.o: MinoI.h MinoI.cpp Mino.h
	g++ -c MinoI.cpp

MinoS.o: MinoS.h MinoS.cpp Mino.h
	g++ -c MinoS.cpp
	
MinoA.o: MinoA.h MinoA.cpp Mino.h
	g++ -c MinoA.cpp
	
MinoB.o: MinoB.h MinoB.cpp Mino.h
	g++ -c MinoB.cpp

clean:
	rm *.o
