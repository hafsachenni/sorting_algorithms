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
 * partition - function that partitions the array
 * @array: array to be sorted
 * @start: first index of array
 * @end: last index of array
 * @size: size of the array
 * Return: the index of the pivot element after partitioning
 */

size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t	i = start - 1;
	size_t	j;
	int	pivot = array[end];

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			if (++i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[end])
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - sorts an array of ints using the quick sort algorithm
 * @array: array to be sorted
 * @start: first index of the array
 * @end: last index of the array
 * @size: size of the array
 */

void quicksort(int *array, int start, int end, size_t size)
{
	int pivot_index;

	if (start < end)
	{
		pivot_index = partition(array, start, end, size);
		quicksort(array, start, pivot_index - 1, size);
		quicksort(array, pivot_index + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array in ascending
 * order using the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == 0 || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
