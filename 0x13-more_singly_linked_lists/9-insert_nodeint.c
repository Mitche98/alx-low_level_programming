#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * in a linked list
 * @head: pointer to first node in list
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *fact;
	listint_t *check = *head;

	fact = malloc(sizeof(listint_t));
	if (!fact || !head)
		return (NULL);

	fact->n = n;
	fact->next = NULL;

	if (idx == 0)
	{
		fact->next = *head;
		*head = fact;
		return (fact);
	}

	for (j = 0; check && j < idx; j++)
	{
		if (j == idx - 1)
		{
			fact->next = check->next;
			check->next = fact;
			return (fact);
		}
		else
			check = check->next;
	}

	return (NULL);
}
