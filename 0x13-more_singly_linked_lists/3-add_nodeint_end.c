#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head: the head
 * @n: number
 * Return: Num
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fire;
	listint_t *aux = *head;

	fire = malloc(sizeof(listint_t));
	if (fire == NULL)
	{
		free(fire);
		return (NULL);
	}
	fire->n = n;
	fire->next = NULL;
	if (*head == NULL)
	{
		*head = fire;
		return (fire);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = fire;
	return (fire);
}
