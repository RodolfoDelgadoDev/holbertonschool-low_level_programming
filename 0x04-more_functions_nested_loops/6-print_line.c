#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: n
 * Return: Always 0.
 */
void print_line(int n)
{
int i = 1;
while (i <= n)
if (i >= 1)
{
_putchar('_');
i++;
}
_putchar('\n');
}
