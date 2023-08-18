#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at
 * a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: the value of the new node
 *
 * Return: address of the new node, or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *flex = malloc(sizeof(dlistint_t));
	dlistint_t *allow;
	unsigned int t;

	if (h == NULL)
		return NULL;

	if (flex == NULL)
		return NULL;

	flex->n = n;
	if (idx == 0)
	{
		flex->prev = NULL;
		flex->next = *h;
		if (*h != NULL)
			(*h)->prev = flex;
		*h = flex;
		return flex;
	}

	allow = *h;
	for (t = 0; t < idx - 1; t++)
	{
		if (allow == NULL)
		{
			free(flex);
			return NULL;
		}
		allow = allow->next;
	}

	if (allow == NULL)
	{
		free(flex);
		return NULL;
	}

	flex->prev = allow;
	flex->next = allow->next;
	if (allow->next != NULL)
		allow->next->prev = flex;
	allow->next = flex;

	return flex;
}
