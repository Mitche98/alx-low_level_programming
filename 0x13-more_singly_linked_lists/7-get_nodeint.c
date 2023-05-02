#include "lists.h"
/**
 * get_nodeint_at_index - returns node at a certain index in linked list
 * @head: first node
 * @index: index of node
 *
 * Return: pointer to node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *soft = head;

	while (soft && a < index)
	{
		soft = soft->next;
		a++;
	}

	return (soft ? soft : NULL);
}
