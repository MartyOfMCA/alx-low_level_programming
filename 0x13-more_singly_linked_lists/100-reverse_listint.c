#include "lists.h"

/**
 * reverse_listint - Reverse the given linked list.
 *
 * @head: The head node in the list
 *
 * Return: The memory address to the new head
 * node in the list
 *
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (head == NULL || (*head) == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = next;
	}
	*head = prev;
	return (*head);
}
