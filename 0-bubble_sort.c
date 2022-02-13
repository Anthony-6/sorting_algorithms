#include "sort.h"

/**
 * bubble_sort - This function is an algorithm the make swap smallest value
 * until the biggest one is gone on the last number of the list
 * @array: The variable array is the array containing the data
 * @size: The variable size is the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i--)
		for (j = 0; j < (size - i - 1); j++)
			if (array[j + 1] < array[j])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}

/**
 * swap - Swaps the two values first and second
 * @first: point to the first integer
 * @second: point to the second integer
 * Return: Nothing
 */

void swap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}
