#include <stdio.h>
#include "holberton.h"
/**
 * _abs - Entry point
 * @n: n
 * Return: int (Success)
 */
int _abs(int n)
{
if (n < 0)
{
n = n*(-1);
}
return (n);
}
