#include "lists.h"

/**
 * list_len - Returns the number of elements
 * in the given linked list.
 *
 * @h: A pointer to the linked list
 *
 * Return: The total number of elements in
 * the given list @h
 *
 **/
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	list_t *node;

	node = (list_t *)h;
	while (node)
	{
		node = node->next;
		node_count++;
	}
	return (node_count);
}
