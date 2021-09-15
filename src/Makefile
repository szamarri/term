all: term
	
term: main.o item.o
	clang++ -o $@ item.o main.o

main.o: main.cpp
	clang++ -c -g -O2 main.cpp
	
item.o: item.cpp item.h
	clang++ -c -g -O2 item.cpp

clean:
	-rm term *.o

.PHONY: all clean

