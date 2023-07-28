#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free_list
 * @head: ptr
 */
void free_list(list_t *head)
{
	list_t *curr;

	curr = head;
	while (curr != NULL)
	{
		head = curr;
		curr = curr->next;
		free(head->str);
		free(head);
	}
}
