#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
