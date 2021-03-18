#include "lists.h"

/**
 * print_list - print a list
 * @h: header
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t c;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			c++;
			continue;
		}
		c++;
		h = h->next;
	}
	return (c);
}
