#include "sort.h"

/**
 * partition - function to find the pivot
 * @array: array of numbers
 * @left: value less than the pivot
 * @right: value more than the pivot
 * @size: size of the array
 * Return: return the array[i] plus 1
 */

int partition(int *array, int left, int right, size_t size)
{
	int i, j, tmp;

	i = left - 1;
	for (j = left; j < right; j++)
	{
		if (array[j] < array[right])
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[right > array[i + 1]])
	{
		tmp = array[i + 1];
        array[i + 1] = array[j];
        array[j] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort - this funtion call the recursive function
 * @array: The pointer on the array of data
 * @size: The size of the array
 * Return: return nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	recursion(array, 0, (int)size - 1, size);
}

/**
 * recursion - recursion function for the main function
 * @array: the pointer on the array of data
 * @size: the size of the array
 * @left: value less than the pivot
 * @right: value more than the pivot
 * Return: return nothing
 */
void recursion(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right, size);
		recursion(array, left, pivot - 1, size);
		recursion(array, pivot + 1, right, size);
	}
}
