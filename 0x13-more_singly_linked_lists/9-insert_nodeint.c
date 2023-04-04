#include "lists.h"

void add_head(listint_t **head, listint_t **node);
void add_tail(listint_t **current, listint_t **node);

/**
 * insert_nodeint_at_index - Add a new node to the given
 * linked list at the specified index.
 *
 * @head: A reference to the head node to the list
 * @idx: The position in the list to insert the new node
 * @n: The data value for the new node
 *
 * Return: The memory address to the new node. Otherwise
 * NULL
 *
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *current = *head;
	unsigned int nodes_scanned = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		add_head(&(*head), &node);
		return (*head);
	}
	while (current != NULL)
	{
		if (nodes_scanned == (idx - 1))
		{
			node->next = current->next;
			current->next = node;
			return (node);
		}
		current = current->next;
		nodes_scanned++;
	}
	if (nodes_scanned == idx)
	{
		add_tail(&current, &node);
		return (node);
	}
	free(node);
	return (NULL);

}

/**
 * add_tail - Add the specified node item @node
 * to the end of the list with the tail node
 * pointing to the new node.
 *
 * @current: The tail node
 * @node: The new node
 *
 **/
void add_tail(listint_t **current, listint_t **node)
{
	(*node)->next = NULL;
	(*current)->next = *node;
}

/**
 * add_head - Add the new node specified as the head
 * node.
 *
 * @head: An current head node
 * @node: The new node created
 *
 **/
void add_head(listint_t **head, listint_t **node)
{
	(*node)->next = (*head);
	(*head) = (*node);
}
