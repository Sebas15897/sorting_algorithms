#ifndef _SORT_H_
#define _SORT_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort_recursion(int *array, size_t size, ssize_t first, ssize_t last);
size_t partition(int *array, size_t size, ssize_t first, ssize_t last);
void swap(int *array, size_t size, int *value1, int *value2);

#endif/*_SORT_H_ */


