#include "sort.h"


/**
 * insertion_sort_list -  function that sorts a doubly linked list
 * @list: double pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		next = current->next;

		while (prev != NULL && prev->n > current->n)
		{
			/*swap current and prev*/
			current->prev = prev->prev;
			if (prev->prev != NULL)
				prev->prev->next = current;

			prev->next = next;
			if (next != NULL)
				next->prev = prev;

			prev->prev = current;
			current->next = prev;

			if (current->prev == NULL)
				*list = current;

}
