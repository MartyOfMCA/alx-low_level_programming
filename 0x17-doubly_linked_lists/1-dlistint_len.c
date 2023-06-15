#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a
 * list.
 *
 * @h: The memory address to the head node in the list
 *
 * Return: The number of nodes available in the list
 *
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;
	const dlistint_t *current = NULL;

	current = h;
	while (current != NULL)
	{
		number_of_nodes++;
		current = current->next;
	}

	return (number_of_nodes);
}
