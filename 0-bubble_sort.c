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

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
			print_array(array, size);
		}
	}
}
