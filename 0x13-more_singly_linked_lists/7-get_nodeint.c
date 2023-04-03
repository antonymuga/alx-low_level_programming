#include "lists.h"

/**
 * get_nodeint_at_index - gets index node
 * @head: head node
 * @index: index of node
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp;

	tmp = head;
	while (counter != index && tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}

	if (counter != index)
		return (NULL);
	return (tmp);
}
