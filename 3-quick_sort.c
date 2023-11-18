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
 */

int partition(int *array, int start, int end, size_t size)
{
	int i, j;
	int pivot = array[end];

	for(i = start - 1, j = start; j <= end - 1; j++)
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[j], &array[i]);
		}
	swap(&array[i], &array[end]);
	print_array(array, size);
	return (i);
}



/**
 * quick_sort - sorts an array of ints
 * @array: array to be sorted
 * @size: size of the array
 * @end: last idx of the array
 * @start: first idx of the array
 */

void quicksort(int *array, size_t size, int end, int start)
{
	int a;
	int pivot = array[end];

	if (start < end)
	{
		a = partition(array, size, start, end);
		quicksort(array, size,  start, pivot - 1);
		quicksort(array, size, pivot + 1, end);
	}
}



/**
 * quick_sort - sorts an array in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	quicksort(array, size, 0, size - 1);
}
