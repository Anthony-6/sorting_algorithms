#include "sort.h"

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

/**
 * sift_down - swaps a node is too small with its largest child
 * until it is at least as large as both
 * @array: the array of numbers
 * @n: represent the size of the heap
 * @i: the index
 * @size: the last number
 */

void sift_down(int *array, int n, int i, size_t size)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && array[left] > array[largest])
		largest = left;
	if (right < n && array[right] > array[largest])
		largest = right;
	if (largest != i)
	{
		swap(&array[i], &array[largest]);
		print_array(array, size);
		sift_down(array, n, largest, size);
	}
}

/**
 * heap_sort - function that find the largest number remove it
 * and push it into a new place
 * @array: the array of numbers
 * @size: The size of the array
 */

void heap_sort(int *array, size_t size)
{
	int i;

	if (size < 2)
		return;

	/*build a max heap */
	for (i = size / 2 - 1; i >= 0; i--)
		sift_down(array, size, i, size);

	/*heap sort */
	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		print_array(array, size);
		sift_down(array, i, 0, size);
	}
}
