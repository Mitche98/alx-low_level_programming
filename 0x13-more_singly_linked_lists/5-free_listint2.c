#include "lists.h"
/**
 * free_listint2 - frees linked lists
 * @head: pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *cool;

	if (head == NULL)
		return;

	while (*head)
	{
		cool = (*head)->next;
		free(*head);
		*head = cool;
	}

	*head = NULL;
}
