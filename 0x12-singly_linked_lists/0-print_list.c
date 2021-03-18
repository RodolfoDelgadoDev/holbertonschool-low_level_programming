#include "lists.h"

/**
 * print_list - print a list
 * @h: header
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		c++;
	}
	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			c++;
			h = h->next;
		}
	}
	return (c);

}
