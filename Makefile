CC = g++
CXXFLAGS = -march=native -O2 -pipe -Wall

all: linUtils.o test

clean:
	rm linUtils.o

linUtils.o: linUtils.cpp linUtils.h
	$(CC) $(CXXFLAGS) -c linUtils.cpp

test: linUtils.o test.cpp
	$(CC) $(CXXFLAGS) linUtils.o test.cpp -o test
