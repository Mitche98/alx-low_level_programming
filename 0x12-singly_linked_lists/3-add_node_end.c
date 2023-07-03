#include "lists.h"
/**
 * add_node_end - add new node at the end
 * @head: head of linked list
 * @str: string to store list
 *
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *try, *clean;
	size_t clothes;

	try = malloc(sizeof(list_t));
	if (try == NULL)
		return (NULL);

	try->str = strdup(str);

	for (clothes = 0; str[clothes]; clothes++)
		;

	try->len = clothes;
	try->next = NULL;
	clean = *head;

	if (clean == NULL)
	{
		*head = try;
	}
	else
	{
		while (clean->next != NULL)
			clean = clean->next;
		clean->next = try;
	}

	return (*head);
}
