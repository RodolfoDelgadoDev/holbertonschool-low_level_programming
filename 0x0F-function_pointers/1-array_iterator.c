#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: array
 * @size: size
 * @action: aksion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
