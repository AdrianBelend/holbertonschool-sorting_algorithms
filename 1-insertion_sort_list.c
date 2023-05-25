#include "sort.h"
/**
 * insertion_sort_list - initializes prototype
 *
 * @list: doubly linked list
 *
 * Description: sort doubly linked list containing integers in asc. order
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *prev = NULL;

	if (list == NULL || *list == NULL)
		return;
	for (current = *list; current != NULL; current = current->next)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev = current->prev;
			if (current->next != NULL)
				current->next->prev = prev;
			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;
			current->prev = prev->prev;
			prev->next = current->next;
			prev->prev = current;
			current->next = prev;
			print_list(*list);
		}
	}
}
