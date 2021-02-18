#include "holberton.h"
#include "2-strlen.c"
/**
 * puts_half - check the code for Holberton School students.
 * @str: Str
 * Return: Always 0.
 */
void puts_half(char *str)
{
int tm;
int mitad;
int largo = _strlen(str);
if ((_strlen(str) % 2) == 0)
mitad = largo / 2;
else
mitad = (largo - 1) / 2;
tm = largo - mitad;
for ( ; tm < largo; tm++)
_putchar(str[tm]);
_putchar(10);
}
