#include "sort.h"

void selection_sort(int *array, size_t size)
{
    size_t minimum;
    int i;
    int j;

    for (i = 0; i < size - 1; i++)
    {
        minimum = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[minimum])
            minimum = j;
        }
        swap(&array[minimum], &array[i]);
        print_array(array, size);
    }
}