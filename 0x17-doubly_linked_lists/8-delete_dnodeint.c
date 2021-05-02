#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node
 * @head: header
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *b = *head;
	dlistint_t *deleted = *head;
	unsigned int c = 0;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = deleted->next;
		free(deleted);
		return (1);
	}
	while (c < index - 1 && b != NULL)
	{
		b = b->next;
		c++;
	}
	if (index - 1 > c || b == NULL)
		return (-1);
	deleted = b->next;
	if (deleted->next != NULL)
		deleted->next->prev = b;
	b->next = deleted->next;
	free(deleted);
	return (1);
}
