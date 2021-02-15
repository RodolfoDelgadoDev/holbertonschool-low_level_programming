#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a == 0)
{
_putchar(str[0]);
a++;
}
a++;
if (str[a] == '\0')
break;
_putchar(str[a]);
a++;
}
_putchar('\n');
}
