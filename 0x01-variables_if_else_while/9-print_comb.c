#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nm;
for (nm = 48 ; nm <= 57 ; nm++)
{
putchar(nm);
if (nm != 57)
{
putchar(95);
putchar(44);
}
}
return (0);
}
