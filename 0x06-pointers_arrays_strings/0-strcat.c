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
int c = 0;
int d = 0;
int e;
while (dest[a] != '\0')
a++;
while (src[b] != '\0')
b++;
c = a + b;
while (a <= c)
{
  e = dest[a];
dest[a] = src[d];
