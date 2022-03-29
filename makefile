pa: main.o Money.o
	g++ main.o Money.o -o pa

main.o: main.cpp
	g++ -c main.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

clean:
	rm *.o
