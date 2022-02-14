#include "sort.h"
/**
 * insertion_sort_list - insert a dobly linked list in ascending order.
 * @list:list
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *tmp, *aux;

	if (!(*list))
		return;

	tmp = (*list)->next;
	aux = tmp;

	while (tmp != NULL)
	{
		if (tmp->prev && tmp->prev->n > tmp->n)
		{
			aux = tmp->next;
			while (tmp->prev && tmp->prev->n > tmp->n)
			{
				tmp->prev->next = tmp->next;
				/*first step*/
				if (tmp->next)
					tmp->next->prev = tmp->prev;
				/*second step*/
				tmp->next = tmp->prev;
				tmp->prev = tmp->prev->prev;
				/*third step*/
				if (tmp->next)
					tmp->next->prev = tmp;
				if (!tmp->prev)
					*list = tmp;
				else
					tmp->prev->next = tmp;
				/*print list*/
				print_list(*list);
			}
			tmp = aux;
		}
		else
			tmp = tmp->next;
	}
}
