#include "lists.h"

/**
 * print_listint - print a list int.
 * @h: header
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t c;

        if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
