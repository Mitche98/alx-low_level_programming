#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning od dlistint_t list
 * @head: head of list
 * @n: value of the element
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_samp = malloc(sizeof(dlistint_t));
	if (first_samp == NULL)
		return NULL;

	first_samp->n = n;
	first_samp->prev = NULL;
	first_samp->next = *head;

	if (*head != NULL)
		(*head)->prev = first_samp;

	*head = first_samp;

	return first_samp;
}
