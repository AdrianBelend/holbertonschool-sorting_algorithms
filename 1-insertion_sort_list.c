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
	size_t a, b, c = 0;
	listint_t *temp = NULL, *temp2 = *list;

	while (temp2)
	{
		c++;
		temp2 = temp2->next;
	}
	if (list == NULL || *list == NULL)
		return;
	for (a = 0; a < c; a++)
	{
		temp = list[a];
		for (b = a; b > 0 && temp->n < list[b - 1]->n; b--)
		{
			list[b] = list[b - 1];
			list[b - 1] = temp;
			print_list(*list);
		}
		list[b] = temp;
	}
}