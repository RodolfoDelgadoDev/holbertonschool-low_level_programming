#include "holberton.h"
/**
 * char *_strcat - check the code for Holberton School students.
 * @dest: dest
 * @src: src
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
char *p = dest;
while (dest[a] != '\0')
a++;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
return (p);
}
