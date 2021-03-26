#include "holberton.h"
/**
 * get_bit - get a bit.
 * @n: number to binary.
 * @index: index.
 * Return: 0 if the number is 0, 1 in the another case and -1 if it's an error
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
