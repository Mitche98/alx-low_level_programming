#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to listint to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *test;

	if (head == NULL)
		return;

	while (*head)
	{
		test = (*head)->next;
		free(*head);
		*head = test;
	}

	*head = NULL;
}
