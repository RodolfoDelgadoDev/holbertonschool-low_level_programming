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
	unsigned int c;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
