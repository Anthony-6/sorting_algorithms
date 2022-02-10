#include "sort.h"


void insertion_sort_list(listint_t **list)
{
    listint_t *tmp;
    listint_t *right = NULL;
    listint_t *left = NULL;

    tmp = *list;
    while (tmp != NULL)
    {
	    right = tmp->next;
	    left = tmp->prev;
	    while(tmp->next < left->next)
	    {
		    tmp->next = right->next;
                    right->next->prev = tmp;
                    right->next = tmp;
                    tmp->prev = right;
		    left->next = right;
		    right->prev = left;
	    }
	    tmp = tmp->next;
	    print_list(*list);
    }
}
