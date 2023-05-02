#include "lists.h"
/**
 * delete_nodeint_at_index - delets a node at a certain index in linked list
 * @head: pointer to first element
 * @index: index of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cool = *head;
	listint_t *first = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cool);
		return (1);
	}

	while (b < index - 1)
	{
		if (!cool || !(cool->next))
			return (-1);
		cool = cool->next;
		b++;
	}

	first = cool->next;
	cool->next = first->next;
	free(first);

	return (1);
}
