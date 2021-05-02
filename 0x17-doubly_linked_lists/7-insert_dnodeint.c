#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node nodes
 * @h: header
 * @idx: index
 * @n: nnnn
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *aux = *h;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (c < idx - 1 && aux != NULL)
	{
		aux = aux->next;
		c++;
	}
	if (idx - 1 > c || aux == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = aux->next;
	if (new->next != NULL)
		new->next->prev = new;
	aux->next = new;
	new->prev = aux;
	return (new);
}
