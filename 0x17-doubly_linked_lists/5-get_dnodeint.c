#include "lists.h"

/**
 * get_dnodeint_at_index - nodes
 * @head: header
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		a++;
	}
	return (head);
}
