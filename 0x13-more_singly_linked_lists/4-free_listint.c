#include "lists.h"

/**
 * free_listint - free list
 * @head: header
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
