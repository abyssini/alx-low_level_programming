#include "lists.h"

/**
 * pop_listint - Function deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: points to list
 *
 * Return: int n
 */

int pop_listint(listint_t **head)
{
	/* declarations */
	listint_t *location;
	int data = 0;

	/* check for null pointer */
	if (!(*head))
		return (0);
	/* capture n */
	data += (*head)->n;
	/* insulate head & move head pointer to new beginning */
	location = *head;
	*head = (*head)->next;
	free(location);
	return (data);
}
