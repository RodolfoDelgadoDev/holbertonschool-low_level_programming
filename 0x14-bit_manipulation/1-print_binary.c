#include "holberton.h"
/**
 * print_binary - print.
 * @n: number to print.
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int i, tumamavieja = 0;
	unsigned long int valor;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = (sizeof(n) * 8) - 1;
	for (; i >= 0; i--)
	{
		valor = n >> i;
		if (valor & 1)
		{
			tumamavieja = 1;
			_putchar('1');
			continue;
		}
		if (tumamavieja)
			_putchar('0');
	}

}
