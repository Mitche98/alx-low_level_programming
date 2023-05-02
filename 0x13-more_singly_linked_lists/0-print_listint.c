#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: array pointer
 *
 * Return: Number of nodes
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
