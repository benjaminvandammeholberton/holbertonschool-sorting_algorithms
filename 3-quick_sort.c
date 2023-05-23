#include "sort.h"

/**
 * swap - function that swaps two integers
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
 * partition - Function that partitions an integer array during
 *             the quicksort algorithm.
 * @array: The integer array to partition.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 *
 * Return: The index of the partition.
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = low;

	for (int j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > pivot)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}


/**
 * quicksort_recursive - Recursive function that performs the quicksort
 *                       algorithm on an array.
 * @array: The integer array to sort.
 * @low: The starting index of the subarray to sort.
 * @high: The ending index of the subarray to sort.
 * @size: The size of the array.
 */

void quicksort_recursive(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pivot = partition(array, low, high, size);

		quicksort_recursive(array, low, pivot - 1, size);
		quicksort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - function that wraps the quicksort_recursive function
 * @array: An integer array
 * @size: The size of the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quicksort_recursive(array, 0, size - 1, size);
}
