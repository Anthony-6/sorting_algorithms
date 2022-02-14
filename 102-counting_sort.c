#include "sort.h"

/**
 * counting_sort - this method create an array with 0
 * add 1 in the index of each number, do the cumulative sum of each instance
 * and finaly reaffect number at the good place
 * @array: the array of integer
 * @size: the size of the array
 */

void counting_sort(int *array, size_t size)
{
	int max, i;
	int *count, *output;

	max = array[0];
	for (i = 1; i < (int)size; i++)
		if (array[i] > max)
			max = array[i];
	count = malloc(sizeof(int) * max);
	if (count == NULL)
		return;

	for (i = 0; i <= max + 1; i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]]++;
	for (i = 1; i <= max + 1; i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;
	for (i = (int)size - 1; i >= 0; i--)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = output[i];
}
