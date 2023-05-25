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
	listint_t *current = NULL, *temp = NULL;

	if (list == NULL || *list == NULL)
		return;
	for (current = *list; current != NULL; current = current->next)
	{
		if (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current;
			if (current->next != NULL)
				current->next = current->prev->next;
			current->prev = current->prev->prev;
			current->prev->next = temp->next;
			if (current->next != NULL)
				current->next->prev = temp->prev;
			print_list(*list);
		}
	}
}
