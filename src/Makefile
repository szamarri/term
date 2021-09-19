SOURCES  := $(wildcard *.cpp)
OBJECTS  := $(subst .cpp,.o,$(SOURCES))
INCLUDE  := -I. -I/usr/lib/
CC       := clang++
CXXFLAGS := -std=c++11

all: term

term: $(OBJECTS)
	$(CC) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $^ $(INCLUDE) $(CXXFLAGS)

info:
	$(info $(SOURCES))
	$(info $(OBJECTS))

clean:
	-rm term $(OBJECTS)

.PHONY: all clean

