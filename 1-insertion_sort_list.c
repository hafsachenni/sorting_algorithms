#include "sort.h"

/**
 * swaps - function that swaps 2 nodes in the list
 * @a: adress of our first node
 * @b: adrees of 2nd node in doubly linkded list
 */

void swaps(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}


/**
 * insertion_sort_list - implements the insertion sort algorithm
 * @list: double pointer to the head of the list
 * Return: sorted list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *r;

	if (!list || !(*list)->next)
		return;

	i = (*list)->next;
	while (i != NULL)
	{
		r = i;
		i = i->next;
		while (r && r->prev)
		{
			if (r->prev->n > r->n)
			{
				swaps(r->prev, r);
				if (!r->prev)
					*list = r;
				print_list((const listint_t *)*list);
			}
		}
	}
}
