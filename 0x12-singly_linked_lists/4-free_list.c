#include "lists.h"

/**
 * free_list - Free the given linked list.
 *
 * @head: The given linked list
 *
 **/
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
