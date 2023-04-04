#include "lists.h"

/**
 * free_listint2 - Free memory allocated for the
 * given linked list @head and remove its
 * reference.
 *
 * @head: The head node in the list
 *
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		current = (*head)->next;
		free(*head);
		(*head) = current;
	}
	(*head) = NULL;
}
