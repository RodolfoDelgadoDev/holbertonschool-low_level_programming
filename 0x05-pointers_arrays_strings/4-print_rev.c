#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: sabaduki
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
a--;
while (a >= 0)
{
_putchar(s[a]);
a--;
}
}
