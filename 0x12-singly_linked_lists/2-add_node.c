#include "lists.h"
/**
 * add_node - adds a new node at beginning of list
 * @head: head of linked list
 * @str: string to store list
 *
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	size_t start;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	first->str = strdup(str);

	for (start = 0; str[start]; start++)
		;

	first->len = start;
	first->next = *head;
	*head = first;

	return (*head);
}
