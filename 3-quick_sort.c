#include "sort.h"


/**
 * partition - array partition int sub arrays
 * @array: array to sort
 * @start: start position
 * @end: end position
 * @size: array size
 * Return: int pivot index
 */

int partition(int *array, int start, int end, size_t size)
{
	int i = start - 1, aux, k;

	for (k = start; k <= end - 1; k++)
	{
		if (array[k] < array[end])
		{
			i++;
			if (i < k)
			{
				aux = array[i];
				array[i] = array[k];
				array[k] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[end])
	{
		aux = array[i + 1];
		array[i + 1] = array[end];
		array[end] = aux;
		print_array(array, size);
	}

	return (i + 1);
}


/**
 * qs - sorts an array of integers recursively
 * @array: array to sort
 * @start: start position
 * @end: end position
 * @size: array size
 */


void qs(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		qs(array, start, pivot - 1, size);
		qs(array, pivot + 1, end, size);
	}
}


/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */


void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
