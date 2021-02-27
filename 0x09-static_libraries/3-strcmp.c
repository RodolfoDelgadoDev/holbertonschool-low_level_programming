#include "holberton.h"
/**
 * _strcmp - acheck the code for Holberton School students.
 * @s1: s1
 * @s2: s2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	for ( ; c <= a; c++, d++)
	{
		if (s1[c] == s2[d])
		{
			continue;
		}
		else
		{
			return (s1[c] - s2[d]);
		}
	}
	return (0);
}
