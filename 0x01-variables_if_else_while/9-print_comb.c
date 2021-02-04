#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nm;
for (nm = '0' ; nm <= '9' ; nm++)
{
putchar ('nm');
putchar(' ,');
if (nm == 9)
nm = 10;
}
putchar('\n');
return (0);
}
