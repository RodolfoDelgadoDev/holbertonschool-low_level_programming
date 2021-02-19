#include "holberton.h"
/**
 * _strncat - acheck the code for Holberton School students.
 * @dest: dest
 * @src: src
 * @n: nnnnnnnnnnnnnnnnnnnnnnnnnn
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
char *p = dest;
while (dest[a] != '\0')
a++;
while (b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (p);
}
