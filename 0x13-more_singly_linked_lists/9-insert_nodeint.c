#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node in linked list
 * @head: pointer to first node
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *win;
	listint_t *easy = *head;

	win = malloc(sizeof(listint_t));
	if (!win || !head)
		return (NULL);

	win->n = n;
	win->next = NULL;

	if (idx == 0)
	{
		win->next = *head;
		*head = win;
		return (win);
	}

	for (c = 0; easy && c < idx; c++)
	{
		if (c == idx - 1)
		{
			win->next = easy->next;
			easy->next = win;
			return (win);
		}
		else
			easy = easy->next;
	}

	return (NULL);
}
