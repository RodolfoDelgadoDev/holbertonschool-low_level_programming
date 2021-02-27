#include "holberton.h"
/**
 * *_memset - memexd
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: nnnnnnnnnnnnnnnnnnnnnnnnnn
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	int a = 0;
	char *c = s;

	for ( ; i < n ; i++, a++)
		s[a] = b;
	return (c);
}
