#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	if (list == NULL || *list == NULL)
		return (-1);

	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		next = current->next;
		while (current->prev != NULL)
		{
			/*swap current and prev*/
			prev->next = next;
			if (next != NULL)
				next->prev = prev;
			current->prev = prev->prev;
		}
	}

}