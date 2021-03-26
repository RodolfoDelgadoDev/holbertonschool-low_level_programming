#include "holberton.h"
/**
 * flip_bits - flip a bits.
 * @n: number to binary.
 * @m: index.
 * Return: 0 if the number is 0, 1 in the another case and -1 if it's an error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int l;
	unsigned int i = 0;

	l = n ^ m;
	while (l != 0)
	{
		if ((l & 1) == 1)
			i++;
		l = l >> 1;
	}
	return (i);



}
