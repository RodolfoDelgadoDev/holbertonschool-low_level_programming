#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: gil (Success)
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
