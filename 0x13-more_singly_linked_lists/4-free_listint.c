#include "lists.h"

/**
 * free_listint - Free the given linked list
 *
 * @head: The head node in the list
 *
 **/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		head->n = 0;
		head->next = NULL;
		free(head);
		head = current;
	}
}
