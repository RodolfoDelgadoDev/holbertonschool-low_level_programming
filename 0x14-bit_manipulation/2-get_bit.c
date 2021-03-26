#include "holberton.h"
/**
 * print_binary - print.
 * @n: number to print.
 * Return: Nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = n;

	if ((sizeof(n) * 8) < index)
		return (-1);
	c = c >> index;
	if ((c & 1) == 1)
		return (1);
	return (0);


}
