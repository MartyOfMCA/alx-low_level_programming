#include "lists.h"


/**
 * insert_dnodeint_at_index - Add a new node at the
 * specified index @idx.
 *
 * @h: The memory address to the head node in the
 * list.
 * @idx: The index where the new node should be
 * inserted.
 * @n: The value for the newly added node
 *
 * Return: The memory address of the newly added node.
 *
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *previous = NULL, *node = NULL;
	unsigned int node_count = 0;

	node = malloc(sizeof(dlistint_t));
	current = (*h);
	node->n = n;
	node->next = current;
	node->prev = NULL;
	while (current != NULL)
	{
		if (node_count == idx)
		{
			break;
		}
		previous = current;
		current = current->next;
		node_count++;
	}
	if (current == NULL && node_count != idx)
		return (NULL);
	node->next = current;
	node->prev = previous;
	if (previous != NULL)
		previous->next = node;
	else
	{
		(*h) = node;
	}
	if (current != NULL)
		current->prev = node;

	return (node);
}
