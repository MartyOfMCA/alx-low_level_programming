#include "lists.h"

/**
 * listint_len - Get the total number of nodes
 * in the given list.
 *
 * @h: The given list
 *
 * Return: The number of nodes in the list
 *
 **/
size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		h = h->next;
		nodes_count++;
	}
	h = NULL;
	return (nodes_count);
}
