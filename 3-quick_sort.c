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
 * partition - function that partitions the array and return (i + 1)
 * @array: array to be sorted
 * @start: first index of array
 * @end: last index of array
 * @size: size of the array
 * @return: the index (i + 1) of the pivot element after partitioning
 */

int partition(int *array, int start, int end, size_t size)
{
	int i, j, pivot = array[end];

	for (i = j = start; j < end; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[end]);
	print_array(array, size);

	return (i);
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

	if (start < end)
	{
		size_t pivot_index = partition(array, size, start, end);

		quicksort(array, size, start, pivot_index - 1);
		quicksort(array, size, pivot_index + 1, end);
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
	if (!array || !size)
		return;
	quicksort(array, sizee, 0, size - 1);
}
