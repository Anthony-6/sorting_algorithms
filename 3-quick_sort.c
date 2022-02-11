#include "sort.h"


int partition (int *array, size_t size)
{
    int i;
    size_t low = 0;
    size_t high = (size - 1);
    size_t j;
    int pivot = array[high];

    for (j = low; j<= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}


void quick_sort(int *array, size_t size)
{
    size_t low = 0;
    size_t high = (size - 1);
    size_t pivot = array[high];
    int recursive;

    if (low < high)
    {
        recursive = partition(array, size);

        quick_sort(array, low- 1);
        quick_sort(array, recursive + 1);

    }
{

}
}