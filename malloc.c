/* -- Main testing file -- */

// # include "custlib.h"
# include <stdlib.h>  /* for malloc ... */
# include <string.h> /* for strlen ... */
# include <stdio.h>
# include <sys/mman.h>
# include <assert.h> /* no need to say why */
# include <sys/types.h>
# include <unistd.h>

/* void *mmap(void addr[.length], size_t length, int prot, int flags,int fd, off_t offset); */
/* void *sbrk(int incr); */
/* pb = program break */

void *malloc(size_t size) {
    printf("malloc printing the size: %lu\n", size);
    void *pb = sbrk(0);
    void *request = sbrk(size);
    if (request == (void*) -1) return NULL; /* sbrk fail */
    else {
        assert(pb == request);
        return pb;
    }
}
int main() {
    char *s = malloc(sizeof(char *) * 12);
    if (s == NULL) return 1;
    
    strcpy(s, "Abdurrahman\0");
    printf("string s: '%s'\n", s);
    
    free(s);
}