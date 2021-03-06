#ifndef SORT_ALGO
#define SORT_ALGO
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *first, int *second);
void insertion_sort_list(listint_t **list);
void swapNode(listint_t *first, listint_t *second);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void recursion(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void swapNodes(listint_t **list, listint_t **nodes);
void cocktail_sort_list(listint_t **list);
void heap_sort(int *array, size_t size);
#endif
