#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: size
 * @cmp: cmp
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
		if (cmp(array[a]) == 1)
			return (a);
	cmp(array[a]);
	return (-1);
}
