CFLAGS=-std=c++11 -Wall -Wconversion -O3 -fPIC
all : ac_build ac_count

ac.o: ac.cc ac.h
	g++ $(CFLAGS) -c -o $@ ac.cc

ac_build : ac_build.cc ac.o
	g++ $(CFLAGS) -o $@ $^

ac_count : ac_count.cc ac.o
	g++ $(CFLAGS) -o $@ $^
