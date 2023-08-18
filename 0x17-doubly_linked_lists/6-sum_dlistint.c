#include "lists.h"

/**
 * sum_dlistint - returns sum of all data(n) of
 * dlistint linked list
 * @head: head of list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *status = head;

	while (status != NULL)
	{
		add += status->n;
		status = status->next;
	}

	return add;
}
