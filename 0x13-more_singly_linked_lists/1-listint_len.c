#include "lists.h"

/**
 * listint_len - functions that returns number of elements in linked list
 * @h: array pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t var = 0;

	while (h)
	{
		var++;
		h = h->next;
	}

	return (var);
}
