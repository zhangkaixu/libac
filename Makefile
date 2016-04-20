ac.o:ac.cc ac.h
	g++ -std=c++11 -c -o ac.o ac.cc

ac_build : ac_build.cc ac.o
	g++ -std=c++11 -o ac_build ac_build.cc ac.o

ac_count : ac_count.cc ac.o
	g++ -std=c++11 -o $@ ac_count.cc ac.o
