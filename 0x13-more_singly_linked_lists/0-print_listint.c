#include "lists.h"

/**
 * print_listint - Displays the elements in
 * the given list.
 *
 * @h: The given linked list
 *
 * Return: The number of nodes in the list
 *
 **/
size_t print_listint(const listint_t *h)
{
	int nodes_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}
	h = NULL;
	return (nodes_count);
}
