#include "sort.h"

/**
 * swap - is a swiping bewteen @a and @b
 * @a: take a aguement and changing it with b
 * @b: take a aguement and changing it with a
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



void selection_sort(int *array, size_t size)
{
	/*looping throght the arr and check is i < than min */
	for (size_t i = 0; i < size - 1; i++)
	{
		size_t min = i;

		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		/* swap the smallest elem with first elem of the sorted part*/
		swap(&array[i], &array[min]);
			for (size_t k = 0; k < size; k++)
			print_array(array[k], size)
		}

	}
}