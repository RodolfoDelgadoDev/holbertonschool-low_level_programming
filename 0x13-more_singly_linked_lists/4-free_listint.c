#include "lists.h"

/**
 * add_nodeint - print a list
 * @head: header
 * @n: number
 * Return: Always 0.
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
