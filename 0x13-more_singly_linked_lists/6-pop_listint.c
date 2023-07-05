#include "lists.h"
/**
 * pop_listint - function that deletes head of node
 * @head: pointer to first element in linked list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *link;
	int val;

	if (!head || !*head)
		return (0);

	val = (*head)->n;
	link = (*head)->next;
	free(*head);
	*head = link;

	return (val);
}
