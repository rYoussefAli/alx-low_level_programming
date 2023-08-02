#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: head
 * @index: del idx
 *
 * Return: 1 (success). -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c_idx;
	listint_t *c_node, *t_node;

	c_idx = 0;
	c_node = *head;
	t_node = *head;
	if (!(*head))
		return (-1);
	if (!index)
	{
		*head = c_node->next;
		free(c_node);
		return (1);
	}
	while (c_node && c_idx < index - 1)
	{
		c_node = c_node->next;
		c_idx++;
	}
	if (c_idx < index - 1)
		return (-1);
	t_node = c_node->next;
	c_node->next = t_node->next;
	free(t_node);
	return (1);
}
