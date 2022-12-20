#include "sort.h"

/**
 * quick_sort - quick sort
 * @array: array to search
 * @size: array size
 * Return: boid
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	partition(array, 0, (int)size - 1, size);
}

/**
 * partition - partition and sorts recursively
 * @array: arry to sort
 * @low: first element
 * @high: last element
 * @size: array size
 */
void partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i, j = low;

	if (low >= high)
		return;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != j)
			{
				array_swap(array, i, j);
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != high)
	{
		array_swap(array, high, j);
		print_array(array, size);
	}

	partition(array, low, j - 1, size);
	partition(array, j + 1, high, size);
}

/**
 * array_swap - switches two ints
 * @array: swap array
 * @a: int a
 * @b: int b
 * Return: void
 */

void array_swap(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
