#include "lists.h"

/**
 * listint_len - list len
 * @h: header
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}
