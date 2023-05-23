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
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the pointer to the array
 * @size: the size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t index;
	size_t i, j;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		if (index != i)
		{
			swap(&array[i], &array[index]);
			print_array(array, size);
		}
	}
}
