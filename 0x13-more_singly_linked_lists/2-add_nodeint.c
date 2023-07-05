#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of linked list
 * @head: pointer to first node
 * @n: point to insert new node
 *
 * Return: pointer to new node, otherwise NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *test;

	test = malloc(sizeof(listint_t));
	if (!test)
		return (NULL);

	test->n = n;
	test->next = *head;
	*head = test;

	return (test);
}
