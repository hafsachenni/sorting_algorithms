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
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2 || !array)
		return;

	/* Loop through all elements */
	for (i = 0; i < size - 1; i++)
	{
		/* Loop through the unsorted elements */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Compare adjacent elements and swap them if they are in wrong order */
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				/* Print the array after each swap */
				print_array(array, size);
			}
		}
	}
}
