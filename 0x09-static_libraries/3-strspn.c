#include "holberton.h"

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
	int z;
	int b = 0;
	int c = 0;
	char *f = accept;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; f[b] != '\0'; b++)
		{
			if (f[b] == s[a])
			{
				c++;
				z = c;
				break;
			}
			z++;
		}
		if (c != z)
			break;
	}
	return (c);
}
