#include "lists.h"

/**
 * print_list - Print the elements in the
 * given linked list.
 *
 * @h: A pointer to the linked list
 *
 * Return: The total number of elements in
 * the given list @h
 *
 **/
size_t print_list(const list_t *h)
{
	char *str;
	size_t node_count = 0;
	list_t *node;

	node = (list_t *)h;
	while (node)
	{
		str = node->str;
		if (str == NULL)
		{
			node->len = 0;
			str = "(nil)";
		}
		printf("[%d] %s\n", node->len, str);
		node = node->next;
		node_count++;
	}
	return (node_count);
}
