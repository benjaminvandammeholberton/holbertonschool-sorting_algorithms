#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers in ascending
 *               order using the Bubble sort algorithm
 * @array: the pointer to the array
 * @size: the size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j = size - 1;
	int temp = 0;

	if (array == NULL || size <= 1)
		return;

	while (j >= 1)
	{
		i = 0;
		while (i < j)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
		j--;
	}
}
