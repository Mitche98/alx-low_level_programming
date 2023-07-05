#include "lists.h"

/**
 * print_listint - function that prints all listint_t list elements
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;

	while (h)
	{
		printf("%d\n", h->n);
		val++;
		h = h->next;
	}

	return (val);
}
