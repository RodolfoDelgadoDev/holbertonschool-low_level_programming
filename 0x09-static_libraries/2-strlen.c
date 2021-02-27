#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: sabaduki
 * Return: Always 0.
 */


int _strlen(char *s)
{
	int a = 0;
	int c = 0;

	while (s[a] != '\0')
	{
		a++;
		c++;
	}
	return (c);
}
