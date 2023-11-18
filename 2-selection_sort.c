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


/**
 * selection_sort - function that sorts a list using selection algo
 * @array: the array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		/* swap the smallest elem with first elem of the sorted part*/
		swap(&array[i], &array[min]);
		/* print the sorted array */
		print_array(array, size);
	}

}
