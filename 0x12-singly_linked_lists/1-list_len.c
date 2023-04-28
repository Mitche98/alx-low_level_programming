#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to list_t list
 *
 * Return: number of elements h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
