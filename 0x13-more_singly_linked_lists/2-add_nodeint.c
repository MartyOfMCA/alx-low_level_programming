#include "lists.h"

/**
 * add_nodeint - Add a new node to the beginning
 * of the given list @head.
 *
 * @head: The head to the given list
 * @n: The element for the new node
 *
 * Return: The new node added as the head of the
 * list
 *
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;
	return (new_node);
}
