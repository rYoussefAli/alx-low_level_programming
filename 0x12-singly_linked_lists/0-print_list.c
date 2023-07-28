#include <stdio.h>
#include "lists.h"
/**
 * print_list - print_list
 * @h: ptr
 *
 * Return: # elements
 */
size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++c;
	}
	return (c);
}
