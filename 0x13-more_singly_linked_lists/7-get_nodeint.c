#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return: pointer to node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *time = head;

	while (time != NULL && (l < index))
	{
		time = time->next;
		l++;
	}

	return (time);
}
