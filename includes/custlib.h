/* -- Custom lib header file -- */

#ifndef CUSTLIB_H
# define CUSTLIB_H

# include "headers.h"

void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);

#endif