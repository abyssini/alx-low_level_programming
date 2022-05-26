#include "lists.h"

/**
 * free_listint2 - Function frees a listint_t list
 * @head: double ptr to list
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *location;
	listint_t *phree;

	if (!head)
		return;
	location = *head;

	while (location)
	{
		phree = location;
		location = location->next;
		free(phree);
	}
	*head = NULL;
}
