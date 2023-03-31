#include "lists.h"

/**
 * add_node - Add a new node with values
 * as the head for the given linked list.
 *
 * @head: The head node in the linked list
 * @str: The string value for the new node
 *
 * Return: A pointer to the newly added head node
 *
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
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
	node->str = strdup(str);
	node->len = str_len;
	node->next = *head;
	*head = node;

	return (*head);
}
