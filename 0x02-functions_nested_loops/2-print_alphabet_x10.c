#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: gil (Success)
 */
void print_alphabet_x10(void)
{
char ch;
int cn;
while (cn <= 9)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
cn++;
}
}
