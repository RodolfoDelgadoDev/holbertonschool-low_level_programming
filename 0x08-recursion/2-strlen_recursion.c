#include "holberton.h"

/**
 * contador - aaaaaa
 * @s: ssss
 * @c: cc
 * Return: Always 0.
 */
int contador(char *s, int c)
{
	if (*s != '\0')
	{
		return (contador(s + 1, c + 1));
	}
	return (c);

}

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: ssss
 * Return: Always 0.
 */



int _strlen_recursion(char *s)
{

	int c = 0;

	if (*s == '\0')
		return (0);
	return (contador(s, c));

}
