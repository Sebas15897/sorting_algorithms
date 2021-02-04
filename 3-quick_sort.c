#include "sort.h"

/**
 * part - create partition of quick sort
 * @arr: the array
 * @low: low digit of array
 * @high: max num in the array
 * @size: size of the array
 * Return: the position of pivote
 */

int part(int *arr, int low, int high, size_t size)
{
	int i = 0, j;
	int piv = 0, tmp = 0;

	i = low - 1;
	piv = arr[high];
	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < piv)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			if (i != j)
				print_array(arr, size);
		}
	}
	if (arr[i + 1] != arr[high])
	{
		tmp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = tmp;
		if (i + 1 != j)
			print_array(arr, size);
	}
	return (i + 1);
}

/**
 * execute - execute the program, create a recursive function
 * to create the tree of process
 * @ar: the array
 * @low: the min number of array
 * @high: the max number of arrat
 * @size: the size of array
 */

void execute(int *ar, int low, int high, size_t size)
{
	int pivv = 0;

	if (low < high)
	{
		pivv = part(ar, low, high, size);
		execute(ar, low, pivv - 1, size);
		execute(ar, pivv + 1, high, size);
	}
}

/**
 * quick_sort - create the algorithm of quick sort
 * @array: the array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int high = 0, low = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	high = size - 1;
	execute(array, low, high, size);
}
