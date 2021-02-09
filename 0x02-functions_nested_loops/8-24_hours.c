#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
void jack_bauer(void)
{
int n0;
int n1;
int n2;
int n3;

for (n0 = '0'; n0 <= '2'; n0++)
{
for (n1 = '0'; n1 <= '3'; n1++)
{
for (n2 = '0'; n2 <= '5'; n2++)
{
for (n3 = '0'; n3 <= '9'; n3++)
{
{
_putchar(n0);
_putchar(n1);
_putchar(n2);
_putchar(':');
_putchar(n3);
_putchar('\n');
}
}
}
}
}
}


