#ifndef SORT_H
#define SORT_H

/* headers */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * bubble_sort - This function sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 * @array: The array that is ordered.
 * @size: The size of the array.
 *
 * Return: Nothing.
 **/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H *
