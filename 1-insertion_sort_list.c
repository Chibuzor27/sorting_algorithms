#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - function
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *target = *list;
	listint_t *current = NULL;
	listint_t *last = NULL;

	if (list != NULL)
	{
		while (target->next != NULL)
		{
			if (target->next->n < target->n)
			{
				current = target;
				do {
					last = current->next->next;
					if (current->prev != NULL)
						current->prev->next = current->next;
					else
						*list = current->next;
					current->next->prev = current->prev;
					current->next->next = current;
					current->prev = current->next;
					current->next = last;
					if (last != NULL)
						last->prev = current;
					print_list(*list);
					current = current->prev;
					if (current->prev != NULL)
						current = current->prev;
				} while (current->next->n < current->n);
				target = current;
			}
			target = target->next;
		}
		target = NULL;
		current = NULL;
		last = NULL;
	}
}
