#include "lists.h"

/**
 * pop_listint - Deletes the head node of linked lists
 * @head: Pointer to the first element in linked lists
 *
 * Return: Data that was deleted inside the elements,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

