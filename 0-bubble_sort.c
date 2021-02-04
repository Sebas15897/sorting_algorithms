#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integer
 * @size: size of the array
 * int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx = 0, aux = 0, loop = 0;

	while (idx < size)
	{
		aux = idx + 1;
		if (aux < size && array[aux] < array[idx])
		{
			aux = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = aux;
			print_array(array, size);
			loop++;
		}
		if (idx + 1 == size)
		{
			if (loop == 0)
				break;
			idx = 0;
			loop = 0;
			continue;
		}
		idx += 1;
	}
}
