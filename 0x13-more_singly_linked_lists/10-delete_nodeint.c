#include "lists.h"

/**
 * delete_nodeint_at_index - Remove the node at the specified
 * index from the given list.
 *
 * @head: The head for the list
 * @index: The index for the node to be removed
 *
 * Return: 1 if operation succeed otherwise -1
 *
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = *head;
	unsigned int nodes_scanned = 0;

	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(temp);
		temp = NULL;
		return (1);
	}
	while (current != NULL)
	{
		if (nodes_scanned == index)
		{
			temp->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		temp = current;
		current = current->next;
		nodes_scanned++;
	}
	return (-1);
}
