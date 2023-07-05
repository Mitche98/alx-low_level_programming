#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in linked list at certain index
 * @head: pointer to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success), -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *test = *head;
	listint_t *docs = NULL;
	unsigned int w = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(test);
		return (1);
	}

	while (w < index - 1)
	{
		if (!test || !(test->next))
			return (-1);
		test = test->next;
		w++;
	}

	docs = test->next;
	test->next = docs->next;
	free(docs);

	return (1);
}
