#include "lists.h"

/**
 * print_listint - Displays the elements of
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
		_putchar(h->n + 48);
		_putchar('\n');
		h = h->next;
		nodes_count++;
	}
	h = NULL;
	return (nodes_count);
}
