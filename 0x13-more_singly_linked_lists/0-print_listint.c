#include "lists.h"

/**
 * print_listint - print integer in list
 * @h: struct listint_t
 * Return:value of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
