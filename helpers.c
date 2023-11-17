#include "sort.h"

/**
 * swap - is a swip function
 * @a: take a aguement and changing it with b
 * @b: take a aguement and changing it with a
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



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
