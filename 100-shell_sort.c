#include "sort.h"

/**
 * shell_sort - sorts in ascending order
 * @array: pointer to the array
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int tmp;

	if (size < 2)
		return;

	while (gap < (size / 3))
		gap = (gap * 3) + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			j = i;
			while (j > gap - 1 && array[j - gap] >= tmp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = tmp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
