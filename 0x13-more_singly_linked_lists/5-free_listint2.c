#include "lists.h"

/**
 * free_listint2 - free list
 * @head: header
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	*head = NULL;
}
