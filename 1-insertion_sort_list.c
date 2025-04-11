#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *
 * @list: The array to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		tmp = current;

		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			listint_t *before = tmp->prev;
			listint_t *after = tmp->next;

			before->next = after;
			if (after)
				after->prev = before;

			tmp->prev = before->prev;
			tmp->next = before;
			before->prev = tmp;

			if (!tmp->prev)
				*list = tmp;

			print_list(*list);
		}

		current = current->next;
	}
}
