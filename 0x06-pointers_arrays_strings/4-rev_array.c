#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: a
 * @n: n
 * Return: Always 0.
 */


void reverse_array(int *a, int n)
{
int g;
int j = 0;
int r = 0;
while (r < n - 1)
{
r++;
}
while (r > j)
{
g = a[r];
a[r] = a[j];
a[j] = g;
r--;
j++;
}
}
