#include "search_algos.h"
/**
 * print_array - print array
 * @array: pointer to the first element of the array to search in
 * @first: number of elements in array
 * @last: value to search for
 * Return: Void
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t pichu;

	printf("Searching in array: ");
	for (pichu = first; pichu <= last; pichu++)
	{
		if (pichu == last)
			printf("%i\n", array[pichu]);
		else
			printf("%i, ", array[pichu]);
	}
}

/**
 * binary_search - searches value in a sorted array of integers using the B.S.A
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = ((right + left) / 2);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
