#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: head node
 * @index: index of node to be deleted
 * Return: boolean value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *_delete;
	unsigned int counter = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && counter != index - 1)
		{
			counter++;
			tmp = tmp->next;
		}
		if (counter != index - 1)
			return (-1);
		_delete = tmp->next;
		tmp->next = tmp->next->next;
		free(_delete);
		return (1);
	}

}
