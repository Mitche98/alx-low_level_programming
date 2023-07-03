#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freedom;

	while ((freedom = head) != NULL)
	{
		head = head->next;
		free(freedom->str);
		free(freedom);
	}
}
