#include "holberton.h"

/**
 * binary_to_uint - prints a unsigned int number in binary notation.
 * @b: number to print.
 * Return: number of digits printed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l, c = 0, t = 0, bin = 1;

	if (b == NULL)
		return (0);
	while (b[c] != '\0')
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		c++;
	}
	for (l = c; l > 0; l--)
	{
		if (b[l - 1] == '1')
			t += bin;
		bin *= 2;
	}
	return (t);
}
