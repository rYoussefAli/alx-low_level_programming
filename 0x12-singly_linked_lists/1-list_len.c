#include <stdio.h>
#include "lists.h"
/**
 * list_len - list_len
 * @h: ptr
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
