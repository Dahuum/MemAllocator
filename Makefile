
all: malloc
	./malloc

malloc:
	cc malloc.c -o malloc
		
clean:
	rm -rf malloc
re: clean all