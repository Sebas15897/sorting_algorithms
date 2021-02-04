#include "sort.h"

void quicksort(int *array, ssize_t start, ssize_t next, size_t size);
void swap(int *n1, int *n2);
int partition(int *array, ssize_t start, ssize_t next, size_t size);

/**
 * quick_sort - Sorts an array of integers in asceding order using the
 * quick sort Algorithm that implements the Lomuto partition scheme.
 * @array: Array of integers that need to be sorted.
 * @size: The size of the array to sort.
 */
void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;

  quicksort(array, 0, size - 1, size);
}
/**
 * quicksort - Does the Actual sorting.
 * @array: Array of integers that need to be sorted.
 * @start: Initial position
 * @next: Ending position
 * @size: Size of the array
 * Return: Void
 */
void quicksort(int *array, ssize_t start, ssize_t next, size_t size)
{
  if (start < next)
    {
      int pivot = partition(array, start, next, size);

      quicksort(array, start, pivot - 1, size);
      quicksort(array, pivot + 1, next, size);
    }
}
/**
 * swap - Swaps two numbers
 * @n1: First number
 * @n2: Second number
 * Return: Void
 */
void swap(int *n1, int *n2)
{
  int tmp;

  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}
/**
 * partition - Pivot and swaps elements
 * @array: Array of integers that need to be sorted.
 * @start: Initial position
 * @next: Ending position
 * @size: Size of the array
 * Return: Pivot number
 */
int partition(int *array, ssize_t start, ssize_t next, size_t size)
{
  int pivot = array[next];
  ssize_t j = start, i;

  for (i = start; i < next; i++)
    if (array[i] < pivot)
      {
	if (j != i)
	  {
	    swap(&array[j], &array[i]);
	    print_array(array, size);
	  }

	j++;
      }
  if (next != j && array[next] != array[j])
    {
      swap(&array[next], &array[j]);
      print_array(array, size);
    }
  return (j);
}
