#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: tamanio
 * Return: Always 0.
 */
void print_square(int size)
{
int f;
int c;
for (f = 1 ; f <= size ; f++)
{
for (c = 1 ; c <= size ; c++)
{
if (size > 0)
{
_putchar('#');
}
}
_putchar('\n');
}
if (size <= 0)
_putchar(10);
}
