#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: the size of the memory to print
 * @height: h
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **b;
	int c;
	int d;
	int e;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);
	if (b == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		b[c] = malloc(sizeof(int) * width);
		if (b[c] == NULL)
		{
			for (e = 0; e < c; e++)
				free(b[e]);
			free(b);
			return (NULL);
		}
		for (d = 0; d < width; d++)
			b[c][d] = 0;

	}

	return (b);
}
