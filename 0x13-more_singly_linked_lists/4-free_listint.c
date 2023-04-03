#include "lists.h"

/**
 * free_listint - frees list
 * @head: struct head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}

}
