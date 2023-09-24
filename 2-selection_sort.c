#include "sort.h"
#include <stdio.h>



/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 * Description: Sorts the array in-place in ascending order using
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minIdx;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minIdx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIdx])
			{
				minIdx = j;
			}
		}
		/*swap*/
		if (minIdx != i)
		{
			tmp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = tmp;
			print_array(array, size);
		}
	}
}
