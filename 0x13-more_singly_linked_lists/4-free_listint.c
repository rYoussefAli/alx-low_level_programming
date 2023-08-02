#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free_listint
 * @head: head list
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	c = head;
	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c);
	}

}
