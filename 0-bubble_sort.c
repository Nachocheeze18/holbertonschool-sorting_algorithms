#include "sort.h"

/**
 * bubble_sort - sorts array bubble wise
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{

	size_t i = 0;
	int x, hold;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i + 1] != '\0')
			{
				x = array[i + 1];

				if (array[i] > x)
				{
					if (array[i + 1] != '\0')
					{
						hold = array[i + 1];
						array[i + 1] = array[i];
						array[i] = hold;
					}
					print_array(array, size);
				}
			}
		}

		for (i = 0; i < size; i++)
		{
			if (array[i + 1] != '\0')
			{
				if (array[i + 1] < array[i])
				{
					bubble_sort(array, size);
					break;
				}
			}
		}
	}
}
