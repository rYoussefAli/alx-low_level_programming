#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: head
 * @idx: idx to insert
 * @n: value
 *
 * Return: node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c_idx;
	listint_t *c_node, *_node;

	if (*head == NULL)
		return (NULL);
	c_idx = 0;
	c_node = *head;
	_node = (listint_t *)malloc(sizeof(listint_t));
	if (!_node)
		return (NULL);
	_node->n = n;
	_node->next = NULL;
	if (idx == 0)
	{
		_node->next = *head;
		*head = _node;
		return (_node);
	}
	while (c_node && c_idx < idx - 1)
	{
		c_node = c_node->next;
		c_idx++;
	}
	if (c_idx < idx - 1)
	{
		free(_node);
		return (NULL);
	}
	_node->next = c_node->next;
	c_node->next = _node;
	return (_node);
}
