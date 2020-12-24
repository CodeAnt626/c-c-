.PHONY: clean
CC=g++ -I./ -c
all: header1.o header2.o header3.o main.o
	g++ header1.o header2.o header3.o main.o
header1.o: header1.cc header1.h
	${CC} header1.cc
header2.o: header2.cc header2.h
	${CC} header2.cc
header3.o: header3.cc header3.h
	${CC} header3.cc
main.o: main.cpp
	${CC} main.cpp
clean:
	rm *.o *.out
