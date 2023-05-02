#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to first element in list
 *
 * Return: data that was deleted, or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *easy;
	int top;

	if (!head || !*head)
		return (0);

	top = (*head)->n;
	easy = (*head)->next;
	free(*head);
	*head = easy;

	return (top);
}
