flags=-O3 -Wall -std=c2x
ldflags=-fPIC -shared -ldl -D_GNU_SOURCE

all: clean birchutils.so

birchutils.so: birchutils.o
	cc ${flags} $^ -o $@ ${ldflags}

birchutils.o: birchutils.c
	cc ${flags} -c $^

clean:
	rm -f birchutils.o birchutils.so
