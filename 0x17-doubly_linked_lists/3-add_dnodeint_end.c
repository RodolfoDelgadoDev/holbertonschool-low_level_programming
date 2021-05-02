#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 * @head: the head
 * @n: number
 * Return: Num
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fire;
	dlistint_t *aux = *head;

	if (head == NULL)
		return (NULL);
	fire = malloc(sizeof(dlistint_t));
	if (fire == NULL)
	{
		free(fire);
		return (NULL);
	}
	fire->n = n;
	fire->next = NULL;
	if (*head == NULL)
	{
		fire->prev = NULL;
		*head = fire;
		return (fire);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = fire;
	fire->prev = aux;
	return (fire);






}
