#include "lists.h"

/**
 * dlistint_len - list len
 * @h: header
 * Return: Always 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}
