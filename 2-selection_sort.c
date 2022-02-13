#include "sort.h"
/**
 * selection_sort - repeatedlyfind the lowest element and put it to the
 * bening of the array
 * @array: array of number to sort
 * @size: size of the array
 * Return: no return because it's a void function
 */

void selection_sort(int *array, size_t size)
{
	size_t minimum, i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (array[minimum] != array[i])
		{
			swap(&array[minimum], &array[i]);
			print_array(array, size);
		}
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
