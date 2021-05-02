#include "lists.h"

/**
 * add_dnodeint - print a list
 * @head: header
 * @n: number
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
        return (new);

}
