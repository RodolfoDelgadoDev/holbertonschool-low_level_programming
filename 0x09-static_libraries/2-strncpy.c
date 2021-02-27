#include "holberton.h"
/**
 * char *_strncpy - check the code for Holberton School students.
 * @dest: dest
 * @src: src
 * @n: nnnnnnn
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (p);
}
