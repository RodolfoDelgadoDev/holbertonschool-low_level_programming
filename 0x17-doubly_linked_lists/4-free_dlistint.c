#include "lists.h"

/**
 * free_listint - free list
 * @head: header
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fire;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		fire = head;
		head = head->next;
		free(fire);
	}
}
