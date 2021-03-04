#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - prints buffer in hexa
 * @s1: the size of the memory to print
 * @s2: s2
 * @n: nnnnn
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0;
	int s2l = 0;
	char *p;
	unsigned int c;
	unsigned int d;
	unsigned int contador = 0;

	while (s1[s1l] != '\0')
		s1l++;
	s1l++;
	while (s2[s2l] != '\0')
		s2l++;
	s2l++;
	contador = s1l + s2l;
	p = malloc(sizeof(char) * contador);

	if (p == NULL)
		return (NULL);

	for (c = 0; c < (s1l - 1); c++)
		p[c] = s1[c];

	for (d = 0; d < n; d++)
		p[c + d] = s2[d];

	return (p);

}
