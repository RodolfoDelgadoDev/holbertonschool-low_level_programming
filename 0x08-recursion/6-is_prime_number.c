#include "holberton.h"

/**
 * prime - check the code for Holberton School students.
 * @n: ni
 * @i: iiiii
 * Return: Always 0.
 */




int prime (int n, int i)
{
	if ((n % i) == 0 && i < n)
                return (0);
	if ((n % i) != 0)
		return (prime (n, i +1));
	return (1);
}







/**
 * is_prime_number - check the code for Holberton School students.
 * @n: ni
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);

	return(prime(n, i));
}
