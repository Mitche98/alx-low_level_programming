#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: head of list
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t read = 0;
	int hope;
	listint_t *now;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		hope = *h - (*h)->next;
		if (hope > 0)
		{
			now = (*h)->next;
			free(*h);
			*h = now;
			read++;
		}
		else
		{
			free(*h);
			*h = NULL;
			read++;
			break;
		}
	}

	*h = NULL;

	return (read);
}
