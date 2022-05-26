#include "lists.h"
/**
 * delete_nodeint_at_index - Function deletes node at index
 * of a listint_t linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if Success, or -1 if Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *half;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (i = 0; i + 1 < index; i++)
		{
			if (tmp->next == NULL)
			{
				return (-1);
			}
			tmp = tmp->next;
		}
		half = tmp->next->next;
		free(tmp->next);
		tmp->next = half;
		return (1);
	}
	else
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
}
