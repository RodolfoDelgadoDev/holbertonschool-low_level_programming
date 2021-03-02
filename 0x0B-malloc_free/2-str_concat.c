#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - prints buffer in hexa
 * @s1: the size of the memory to print
 * @s2: s2
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	char *conc;
	int d;
	int j;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	conc = malloc(sizeof(char) + (a + b) + 1);
	if (conc == NULL)
		return (NULL);
	if (s1 == '\0' && s2 == '\0')
	{
		conc[0] = '\0';
		return (conc);
	}
	if (s1 == '\0')
	{
		conc = s2;
		return (conc);
	}
	if (s2 == '\0')
	{
		conc = s1;
		return (conc);
	}
	for (d = 0; d < a; d++)
		conc[d] = s1[d];
	for (j = 0; j < b; j++)
		conc[a + j] = s2[j];
	conc[j] = '\0';
	return (conc);
}
