#include "lists.h"

/**
 * add_node_end - Add a new node with values
 * as the tail for the given linked list.
 *
 * @head: The head node in the linked list
 * @str: The string value for the new node
 *
 * Return: A pointer to the newly added head node
 *
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *t;
	int str_len = 0;

	while (str[str_len])
	{
		str_len++;
	}

	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	t = *head;
	node->str = strdup(str);
	node->len = str_len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (t->next)
	{
		t = t->next;
	}

	t->next = node;
	return (node);
}
