#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the L.s.a
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t pichu = 0;

	if (!array)
		return (-1);
	for(; pichu < size; pichu++)
	{
		printf("Value checked array[%lu] = [%i]\n", pichu, array[pichu]);
		if (array[pichu] == value)
		{
			return(pichu);
		}
	}
	return(-1);
}
