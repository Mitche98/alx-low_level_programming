#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of
 * dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nana = malloc(sizeof(dlistint_t));
	dlistint_t *change;

	if (nana == NULL)
		return NULL;

	nana->n = n;
	nana->next = NULL;

	if (*head == NULL)
	{
		nana->prev = NULL;
		*head = nana;
		return nana;
	}

	change = *head;
	while (change->next != NULL)
		change = change->next;

	nana->prev = change;
	change->next = nana;

	return nana;
}
