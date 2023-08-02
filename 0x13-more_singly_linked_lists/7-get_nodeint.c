#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: head
 * @index: index
 *
 * Return: node at @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	c = 0;
	while (head && c < index)
	{
		head = head->next;
		c++;
	}
	if (c < index)
		return (NULL);
	return (head);
}
