#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new nodes at the beginning of linked lists
 * @head: Double pointers to the list_t list
 * @str: New strings to add in the node
 *
 * Return: Address of new elements, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
