#include "lists.h"

/**
 * sum_listint - Find the sum of all the data
 * in the linked list.
 *
 * @head: The head node in the list
 *
 * Return: The sum of data values from
 * nodes in the given list
 *
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
