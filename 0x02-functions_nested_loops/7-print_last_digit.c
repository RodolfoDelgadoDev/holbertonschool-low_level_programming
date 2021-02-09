#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: nothing
 * Return: c (Success)
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = n*(-1);
n = n % 10;
_putchar(n + '0');
}
else 
{
n = n % 10;
_putchar(n + '0');
}
return(n);
}
