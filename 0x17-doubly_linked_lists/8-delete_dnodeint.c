#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a doubly linked list
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *great = *head;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(great);
		return (1);
	}

	for (k = 0; k < index; k++)
	{
		if (great == NULL)
			return (-1);
		great = great->next;
	}

	if (great == NULL)
		return (-1);

	if (great->prev != NULL)
		great->prev->next = great->next;
	if (great->next != NULL)
		great->next->prev = great->prev;
	free(great);

	return (1);
}
