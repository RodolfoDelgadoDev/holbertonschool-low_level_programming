#include "holberton.h"
#include<stdbool.h>
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
void times_table(void)
{
int n1;
int n2;
for (n1 = 0; n1 <= 9; n1++)
{
for (n2 = 0; n2 <= 9; n2++)
{
int i = n1 * n2;
int a = i % 10;
int b = i / 10;
if (b > 0)
{
_putchar(b + '0');
}
if (b == 0 && n2 != 0)
{
_putchar(' ');
}
_putchar(a + '0');
if (n2 != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

