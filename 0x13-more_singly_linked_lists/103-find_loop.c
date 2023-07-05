#include "lists.h"
/**
 * find_listint_loop - finds loop in linked list
 * @head: linked list to search for
 *
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *get = head;
	listint_t *that = head;

	if (!head)
		return (NULL);

	while (get && that && that->next)
	{
		that = that->next->next;
		get = get->next;
		if (that == get)
		{
			get = head;
			while (get != that)
			{
				get = get->next;
				that = that->next;
			}
			return (that);
		}
	}

	return (NULL);
}
