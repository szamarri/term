all: term
	
term: main.o item.o
	clang++ -o $@ item.o main.o

main.o: main.cpp
	clang++ -c -g -O2 main.cpp
	
item.o: Item.cpp Item.hpp
	clang++ -c -g -O2 Item.cpp -o item.o

clean:
	-rm term

.PHONY: all clean

