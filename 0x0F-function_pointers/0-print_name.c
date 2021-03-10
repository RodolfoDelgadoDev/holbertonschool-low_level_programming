#include <stdio.h>

/**
 * print_name- print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	int a;
	int b;
	for (a = 0; name[a] != '\0'; a++)
		
