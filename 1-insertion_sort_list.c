#include "sort.h"

/**
 * insertion_sort_list - function that swap to nodes to sort the node
 * @list: double pointer to the first node
 * Return: Nothing if it fail
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *right = NULL;
	listint_t *left = NULL;
	listint_t *tmp;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return;

	tmp = (*list)->next;
	while (tmp != NULL)
	{
		left = tmp->prev;
		right = tmp->next;
		while (left && tmp->n < left->n)
		{
			if (left->prev != NULL)
				left->prev->next = tmp;
			left->next = right;
			tmp->next = left;
			tmp->prev = left->prev;
			left->prev = tmp;
			if (right != NULL)
				right->prev = left;
			right = left;
			left = tmp->prev;
			if (left == NULL)
			{
				*list = tmp;
				tmp = tmp->next;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (left != NULL)
			tmp = right;
	}
}
