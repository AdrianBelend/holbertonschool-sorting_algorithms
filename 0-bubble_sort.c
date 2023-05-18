#include "sort.h"

/**
 * bubble_sort - function
 * @array: array
 * @size: size_t
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b, c = 0;

	if (size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		for(b = 0; b < size; b++)
		{
			if(array[b] > array[b + 1] && array[b + 1])
			{
				c = array[b];
				array[b] = array[b + 1];
				array[b + 1] = c;
				print_array(array, size);
			}
		}
	}
}
