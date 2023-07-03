#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: singly linked list
 *
 * Return: number of linked list_t list elements
 */
size_t list_len(const list_t *h)
{
	size_t singly;

	singly = 0;
	while (h != NULL)
	{
		h = h->next;
		singly++;
	}
	return (singly);
}
