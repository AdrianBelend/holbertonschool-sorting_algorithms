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
	size_t c = 0;
	listint_t *current = NULL, *prev = NULL, *next = NULL, *temp = NULL;

	if (list == NULL || *list == NULL)
		return;
	current = *list;
	while (current)
	{
		c++;
		current = current->next;
	}
	current = *list;
	for (; current; current = next)
	{
		prev = current->prev;
		next = current->next;
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
