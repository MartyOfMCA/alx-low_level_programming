#include "lists.h"

/**
 * add_nodeint_end - Add a new node to as the tail
 * of the given linked list.
 *
 * @head: The head of the given linked list
 * @n: The element for the new node
 *
 * Return: A node as the tail for the list
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = malloc(sizeof(listint_t));
	listint_t *current;

	if (tail == NULL)
	{
		return (NULL);
	}
	tail->n = n;
	tail->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = tail;
		return (*head);
	}
	current = (*head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = tail;
	return (*head);
}
