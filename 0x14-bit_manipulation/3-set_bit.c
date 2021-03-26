#include "holberton.h"
/**
 * set_bit - set a bit.
 * @n: number to binary.
 * @index: index.
 * Return: 0 if the number is 0, 1 in the another case and -1 if it's an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if ((sizeof(*n) * 8) < index)
		return (-1);
	c = 1 << index;
	*n = (*n | c);
	return (1);




}
