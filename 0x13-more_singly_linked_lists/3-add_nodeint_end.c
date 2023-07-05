#include "lists.h"
/**
 * add_nodeint_end - adds node at end of listint_t list
 * @head: pointer to first element
 * @n: point to insert new node
 *
 * Return: pointer to new node, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *link = *head;

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (link->next)
		link = link->next;

	link->next = list;

	return (list);
}
