#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at the specified index
 * @index.
 *
 * @head: The head node in the list
 * @index: The index for the node to be retrieved
 * beginning at 0
 *
 * Return: The node at the specified index. Otherwise
 * NULL
 *
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int nodes_scanned = 0;

	while (node != NULL)
	{
		if (nodes_scanned == index)
		{
			return (node);
		}
		node = node->next;
		nodes_scanned++;
	}
	return (NULL);
}
