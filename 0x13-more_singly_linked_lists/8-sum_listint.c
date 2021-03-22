#include "lists.h"

/**
 * get_nodeint_at_index - nodes
 * @head: header
 * @index: index
 * Return: the nth node
 */
int sum_listint(listint_t *head)
{
	int c = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}
