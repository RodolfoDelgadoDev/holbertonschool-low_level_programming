#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: min
 * @max: max
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *a;
	int c;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; (c + min) <= max; c++)
		a[c] = c + min;
	return (a);

}
