#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t minimum, i, j;

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
