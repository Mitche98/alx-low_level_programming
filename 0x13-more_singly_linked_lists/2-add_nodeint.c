#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds new node ta beginning of linked list
 * @head: double pointer
 * @str: new string to add node
 *
 * Return: address of new element, NULL if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *win;

	win = malloc(sizeof(listint_t));
	if (!win)
		return (NULL);

	win->n = n;
	win->next = *head;
	*head = win;

	return (win);
}
