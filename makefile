hw1: driver.o cargo.o person.o
	g++ driver.o cargo.o person.o -o hw1

driver.o: driver.cpp train.h bus.h cargo.h person.h
	g++ -c driver.cpp

cargo.o: cargo.h cargo.cpp
	g++ -c cargo.cpp

person.o: person.h person.cpp
	g++ -c person.cpp

clean:
	rm *.o hw1
