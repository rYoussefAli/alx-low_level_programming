#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: head
 *
 * Return: sum int
 */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
