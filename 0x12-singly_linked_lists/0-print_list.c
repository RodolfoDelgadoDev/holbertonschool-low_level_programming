#include "lists.h"

/**
 * print_list - print a list
 * @h: header
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (c);
	}

	while (h != NULL)
	{
		printf("[%d] %s", h->len, h->str);
		c++;
		h->next;
	}
	return (c);

}
