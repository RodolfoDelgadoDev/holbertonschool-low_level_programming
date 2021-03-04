#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = nmemb * size;
	a = malloc(c);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < c; b++)
		a[b] = 0;

	return (a);
}
