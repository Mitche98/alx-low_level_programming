#include "lists.h"

/**
 * print_listint_safe - prints listint_t list safely
 * @head: pointer to head of listint_t
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t hang = 0;
	long int this;

	while (head)
	{
		this = head - head->next;
		hang++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (this > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (hang);
}
