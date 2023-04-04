#include "lists.h"

/**
 * pop_listint - Pop the first node off the
 * given linked list returning the node's data.
 *
 * @head: The head node to the linked list
 *
 * Return: The data in the node being popped
 *
 **/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	node = (*head);
	(*head) = (*head)->next;
	free(node);
	node = NULL;
	return (data);
}
