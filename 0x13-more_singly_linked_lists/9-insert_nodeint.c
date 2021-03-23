#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node nodes
 * @head: header
 * @idx: index
 * @n: nnnn
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *aux = *head;
	unsigned int c = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (c < idx - 1 && aux != NULL)
	{
		aux = aux->next;
		c++;
	}
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
