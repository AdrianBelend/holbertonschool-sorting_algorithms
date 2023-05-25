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
	listint_t *current = NULL, *prev = NULL, *temp = NULL;

	if (list == NULL || *list == NULL)
		return;
	current = *list;
	for (; current != NULL; current = current->next)
	{
		prev = current->prev;
		if (prev && prev->prev && current->n < prev->n)
		{
			temp = current->next;
			current->next = prev;
			prev->prev->next = current;
			current->prev = prev->prev;
			prev->prev = current;
			prev->next = temp;
			if (temp)
				temp->prev = prev;
			if (!current->prev)
				*list = current;
			print_list(*list);
		}
	}
}
