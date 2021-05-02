#include "lists.h"

/**
 * print_dlistint - Print d linked list.
 * @h: header
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
