  
#include "sort.h"

/**
 * insertion_sort_list - This function sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm.
 * @list: The list.
 *
 * Return: Nothing.
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *aux;
	int c;

	if (!list || !*list)
		return;
	aux = *list;
	while (aux->next)
	{
		c = 1;
		if (aux->n > aux->next->n)
		{
			if(!aux->prev)
			{
				if (!aux->next->next)
				{
					aux->next->next = aux;
					aux->next->prev = NULL;
					aux->prev = aux->next;
					aux->next = NULL;
				}
				else
				{
					aux->next = aux->next->next;
					aux->next->prev->next = aux;
					aux->next->prev->prev = NULL;
					aux->prev = aux->next->prev;
					aux->next->prev = aux;
				}
				*list = aux->prev;
				aux = aux->prev;
			}
			else if ((aux->next->next) && (aux->prev))
			{
				aux->prev->next = aux->next;
				aux->next->prev = aux->prev;
				aux->next->next->prev = aux;
				aux->next = aux->next->next;
				aux->prev->next->next = aux;
				aux->prev = aux->prev->next;
				aux = aux->prev;
				if (aux->prev->n > aux->n)
				{
					if (aux->prev->prev)
						aux = aux->prev->prev;
					else
					{
						aux = aux->prev;
						c = 2;
					}
				}
			}
			else
			{
				aux->prev->next = aux->next;
				aux->next->next = aux;
				aux->next->prev = aux->prev;
				aux->prev = aux->next;
				aux->next = NULL;
				aux = aux->prev;
				if (aux->prev->n > aux->n)
				{
					if (aux->prev->prev)
						aux = aux->prev->prev;
				}
			}
			print_list(*list);
		}
		if (c == 1)
			aux = aux->next;
	}
}
