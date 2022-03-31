pa: main.o Money.o Account.o
	g++ main.o Money.o Account.o -o pa

main.o: main.cpp
	g++ -c main.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

clean:
	rm *.o
