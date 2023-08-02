#include <stdio.h>
#include "lists.h"
/**
 * listint_len - listint_len
 * @h: head
 *
 * Return: len of list
 */
size_t listint_len(const listint_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
