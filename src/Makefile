SOURCES := $(wildcard *.cpp)
OBJECTS := $(subst .cpp,.o,$(SOURCES))
INCLUDE := -I.
CC      := clang++

all: term

term: $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -o $@ -c $^ $(INCLUDE)

info:
	$(info $(SOURCES))
	$(info $(OBJECTS))

clean:
	-rm term $(OBJECTS)

.PHONY: all clean

