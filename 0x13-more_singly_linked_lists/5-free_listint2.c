#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free_listint2
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *next;

	if (!head)
		return;
	c = *head;
	next = NULL;
	while (c != NULL)
	{
		next = c->next;
		free(c);
		c = next;
	}
	*head = NULL;
}
