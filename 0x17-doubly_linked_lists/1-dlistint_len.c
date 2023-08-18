#include "lists.h"

/**
 * dlistint_len - returns number of elements in double linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t find = 0;

	while (h != NULL)
	{
		find++;
		h = h->next;
	}

	return find;
}
