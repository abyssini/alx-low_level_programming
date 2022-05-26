#include "lists.h"

/**
 * free_listint - Function frees a listint_t list
 * @head: points to list
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *phree;

	if (!head)
		return;
	while (head)
	{
		phree = head;
		head = head->next;
		free(phree);
	}
}
