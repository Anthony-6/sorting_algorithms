#include "sort.h"

void swapNode(listint_t *first, listint_t *second)
{
    listint_t *tempValue;

    tempValue = first;
    first = second;
    second = tempValue;
}


void insertion_sort_list(listint_t **list)
{
    listint_t *tmp;
    listint_t *infNode;
    listint_t *back;

    tmp = *list;
    while (tmp != NULL)
    {
        if (tmp->next->n < tmp->n)
        {
            infNode = tmp->next;
            back = infNode;
            while (back->prev != NULL)
            {
                if (back->prev->prev == NULL)
                {
                    infNode->prev = infNode->prev->prev;
                    infNode->next = infNode->prev->prev->next;
                }
                else
                back = back->prev;
                if (back->n > back->prev->n)
                infNode->next = back->next;
                infNode->prev = back->prev;
                
            }
        }
        tmp = tmp->next;
    }
}