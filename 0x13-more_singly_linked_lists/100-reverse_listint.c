#include "lists.h"

/**
 * reverse_listint - Reverses linked lists
 * @head: Pointer to first nodes in the list
 *
 * Return: Pointer to first node in new lists
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
