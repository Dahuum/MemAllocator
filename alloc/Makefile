flags=-O2 -Wall -std=c2x
ldflags=

.PHONY: all clean

all: clean alloc

alloc: alloc.o
	cc $(flags) $^ -o $@ $(ldflags)

alloc.o: alloc.c alloc.h
	cc $(flags) -c $<

clean:
	rm -f *.o alloc
