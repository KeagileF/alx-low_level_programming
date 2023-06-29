#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns number of elements in linked lists
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
