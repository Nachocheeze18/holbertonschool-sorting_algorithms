#include "sort.h"

/**
 * insertion_sort_list - sorts array bubble wise
 * @list: double linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *hold, *place, *place2;

	if (!list)
		return;
	if (!(*list))
		return;
	if (!(*list)->next)
		return;

	hold = *list;

	while (hold->next)
	{
		if (hold->n > hold->next->n)
		{
			place = hold;
			place2 = hold->next;
			place2->prev = place->prev;

			if (place->prev)
				place->prev->next = place2;
			else
				*list = place2;
			if (place2->next)
			{
				place2->next->prev = place;
			}
			place->prev = place2;
			place->next = place2->next;
			place2->next = place;
			hold = hold->prev;
			print_list(*list);
			if (hold->prev && hold->prev->n > hold->n)
			{
				hold = hold->prev;
				continue;
			}
		}
		hold = hold->next;
	}
}
