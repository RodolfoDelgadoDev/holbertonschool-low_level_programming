#include "holberton.h"
/**
 * *_memcpy - memepyxd
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: nnnnnnnnnnnnnnnnnnnnnnnnnn
 * Return: c
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	int a = 0;
	char *c = dest;

	for ( ; i < n ; i++, a++)
		c[a] = src[a];
	return (c);
}
