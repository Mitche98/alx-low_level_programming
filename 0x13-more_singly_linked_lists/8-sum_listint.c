#include "lists.h"
/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: first node in linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *made = head;

	while (made)
	{
		sum += made->n;
		made = made->next;
	}

	return (sum);
}
