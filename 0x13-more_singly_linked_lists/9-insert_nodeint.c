#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: head node
 * @idx: index of node
 * @n: value of head node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL && counter != idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}

	if (counter != idx - 1 && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx != 0)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
