#include "lists.h"

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: pointer to first element
 * @n: data to insert
 *
 * Return: pointer to new node, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *bad;
	listint_t *easy = *head;

	bad = malloc(sizeof(listint_t));
	if (!bad)
		return (NULL);

	bad->n = n;
	bad->next = NULL;

	if (*head == NULL)
	{
		*head = bad;
		return (bad);
	}

	while (easy->next)
		easy = easy->next;

	easy->next = bad;

	return (bad);
}
