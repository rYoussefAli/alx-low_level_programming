#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print_listint
 * @h: head
 *
 * Return: # nodes
 */
size_t print_listint(const listint_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
