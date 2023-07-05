#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to listint to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *test;

	while ((*head) != NULL)
	{
		test = *head;
		*head = (*head)->next;
		free(test);
	}
	free(*head);
	*head = NULL;
}
