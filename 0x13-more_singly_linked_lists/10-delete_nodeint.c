#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: header
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *b = *head;
	listint_t *deleted = *head;
	unsigned int c = 0;

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
	b->next = deleted->next;
	free(deleted);
	return (1);
}
