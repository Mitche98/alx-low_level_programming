#include "lists.h"
/**
 * sum_listint - calculates sum of all data in listint_t
 * @head: first node in list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *soft = head;

	while (soft)
	{
		sum += soft->n;
		soft = soft->next;
	}

	return (sum);
}
