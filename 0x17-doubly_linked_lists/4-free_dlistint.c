#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the node element
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *push;

	while (head != NULL)
	{
		push = head;
		head = head->next;
		free(push);
	}
}
