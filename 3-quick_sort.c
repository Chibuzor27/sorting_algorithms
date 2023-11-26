#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - function
 * @array: the array
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	int i;
	int j;
	int temp;

	if (size > 0)
	{
		for (j = size - 1; j >= 0; j--)
		{
			for (i = 1; i <= j; i++)
			{
				if (array[i] < array[i - 1])
				{
					temp = array[i];
					array[i] = array[i - 1];
					array[i - 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
