#include "lists.h"

/**
 * listint_len - returns number of linked list element
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t link = 0;

	while (h)
	{
		link++;
		h = h->next;
	}

	return (link);
}
