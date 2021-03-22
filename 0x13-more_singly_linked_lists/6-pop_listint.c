#include "lists.h"

/**
 * pop_listint - print a list
 * @head: header
 * Return: n.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int i;

	if (*head == NULL)
		return (0);
	aux = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(aux);
	return (i);
}
