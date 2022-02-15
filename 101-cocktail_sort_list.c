#include "sort.h"
/**
* switchnodes - swap two node and recreate link
* @list: pointer to the list
* @nodes: pointer to the nodes structures
* Return: no return, void function
*/
void switchnodes(listint_t **list, listint_t **nodes)
{
	listint_t *nodeOne;
	listint_t *nodeTwo;
	listint_t *nodeThree;
	listint_t *nodeFour;

	nodeOne = (*nodes)->prev;
	nodeTwo = *nodes;
	nodeThree = (*nodes)->next;
	nodeFour = (*nodes)->next->next;
	nodeTwo->next = nodeFour;
	if (nodeFour != NULL)
		nodeFour->prev = nodeTwo;
	nodeThree->next = nodeTwo;
	nodeThree->prev = nodeTwo->prev;
	if (nodeOne != NULL)
		nodeOne->next = nodeThree;
	else
		*list = nodeThree;
	nodeTwo->prev = nodeThree;
	*nodes = nodeThree;
}
/**
 * cocktail_sort_list - sort node with the cocktail sort method
 * @list: pointer to the list
 * Return: no return, void function
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	tmp = *list;
	while (tmp->next != NULL)
	{
		if (tmp->n > tmp->next->n)
		{
			switchnodes(list, &tmp);
			print_list(*list);
			}
		else
			tmp = tmp->next;
	}
	tmp = tmp->prev;
	while (tmp->prev != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			tmp = tmp->prev;
			switchnodes(list, &tmp);
				print_list(*list);
		}
		else
			tmp = tmp->prev;
	}
}
