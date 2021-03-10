#ifndef AA
#define AA
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#include <stddef.h>
#endif
