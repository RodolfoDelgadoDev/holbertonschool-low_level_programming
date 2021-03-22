#include "lists.h"

/**
 * add_nodeint - print a list
 * @head: header
 * @n: number
 * Return: Always 0.
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
	return(i);
}
