#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * order using the Bubble sort algorithm.
 * @array: The array that is ordered.
 * @size: The size of the array.
 *
 * Return: Nothing.
 **/
void bubble_sort(int *array, size_t size)
{
	size_t total_t, position_v;
	int container = 0;

	if (!array || !size || size < 2)
	{
		return;
	}

	total_t = 0;
	while (total_t < size)
	{
		position_v = 0;
		while (position_v < (size - 1))
		{
			if (array[position_v] > array[position_v + 1])
			{
				container = array[position_v];
				array[position_v] = array[position_v + 1];
				array[position_v + 1] = container;
				print_array(array, size);
			}
			position_v++;
		}
		total_t++;
	}
}
