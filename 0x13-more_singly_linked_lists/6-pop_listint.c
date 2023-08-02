#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: head
 *
 * Return: removed node pointer
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *c;

	c = *head;
	if (!*head)
		return (0);
	d = c->n;
	*head = c->next;
	return (d);
}
