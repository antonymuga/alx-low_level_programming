#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add a tail node
 * @head: the head node
 * @str: string to be added
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int index = 0;
	list_t *new_node, *m;

	while (str[index])
		index++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		m = *head;
		while (m->next != NULL)
			m = m->next;
		m->next = new_node;
		return (new_node);
	}
}
