#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts array bubble wise
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int swap = 0;
	int count = -1;
	size_t x = 0;
	int flag = 0;

	if (!array || size < 2)
		return;

	while (x < size)
	{
		for (i = x; i < size; i++)
		{
			swap = swap + array[i];
		}
		for (i = x; i < size; i++)
		{
			if (array[i] < swap)
			{
				swap = array[i];
				count = i;
			}
		}
		if (count != -1)
		{
			if (array[count] == array[x])
				flag = 1;
			array[count] = array[x];
			if (array[x] == swap)
				flag = 1;
			array[x] = swap;
			if (flag != 1)
				print_array(array, size);
		}
		x++;
		flag = 0;
	}
}
