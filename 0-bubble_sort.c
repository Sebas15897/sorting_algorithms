#include "sort.h"

/**
 * bubble_sort - This function sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 * @array: The array that is ordered.
 * @size: The size of the array.
 *
 * Return: Nothing.
 **/
void bubble_sort(int *array, size_t size)
{
	size_t total_times, position_value;
	int container = 0;

	if (!array || !size || size < 2)
	{
		return;
	}

	total_times = 0;
	while (total_times < size)
	{
		position_value = 0;
		while (position_value < (size - 1))
		{
			if (array[position_value] > array[position_value + 1])
			{
				container = array[position_value];
				array[position_value] = array[position_value + 1];
				array[position_value + 1] = container;
				print_array(array, size);
			}
			position_value++;
		}
		total_times++;
	}
}
