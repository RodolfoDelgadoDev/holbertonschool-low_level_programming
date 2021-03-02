#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *cha = malloc(sizeof(char) * size);

	if (cha == NULL || size == 0)
	{
		return (NULL);
	}

	for (a = 0; a <= size; a++)
		cha[a] = c;
	return (cha);
}
