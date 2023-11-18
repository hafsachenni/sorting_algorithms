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
 * @return: the index of the pivot element after partitioning
 */

int partition(int *array, int start, int end, size_t size)
{
	int i, j;
	int pivot = array[end]; // choose the last element as the pivot

	for(i = start - 1, j = start; j <= end - 1; j++)
		if (array[j] <= pivot) // if the current element is smaller than or equal to the pivot
		{
			i++; // increment the index of the smaller element
			swap(&array[j], &array[i]); // swap the current element with the smaller element
		}
	swap(&array[i + 1], &array[end]); // swap the pivot element with the element at the next position of the smaller element
	print_array(array, size); // print the array after partitioning
	return (i + 1); // return the index of the pivot element
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
	int pivot_index; // declare a variable to store the index of the pivot element

	if (start < end) // if the array has more than one element
	{
		pivot_index = partition(array, start, end, size); // partition the array and get the index of the pivot element
		quicksort(array, start, pivot_index - 1, size); // sort the left subarray recursively
		quicksort(array, pivot_index + 1, end, size); // sort the right subarray recursively
	}
}



/**
 * quick_sort - sorts an array in ascending order using the quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size); // call the quicksort function with the whole array
}