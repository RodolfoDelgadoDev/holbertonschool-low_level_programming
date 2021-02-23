#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strspn - pn
 * @accept: acpt
 * @s: ss
 *
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;
	char *f = accept;

	for (a = 0; a <= b; a++)
	{
		for (b = 0; f[b] != '\0'; b++)
		{
			if (f[b] == s[a])
			{
				c++;
			}
		}
	}
	return (c);
}
