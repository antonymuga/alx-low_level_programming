#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a lists
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *buffer;

	while (head != NULL)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
