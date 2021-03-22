#include "lists.h"

/**
 * get_nodeint_at_index - nodes
 * @head: header
 * @index: index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
