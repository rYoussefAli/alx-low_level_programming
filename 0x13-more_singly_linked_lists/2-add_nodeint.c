#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add_nodeint
 * @head: head list
 * @n: value of node
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node;

	_node = (listint_t *)malloc(sizeof(listint_t));
	if (_node == NULL)
		return (NULL);
	_node->n = n;
	_node->next = *head;
	*head = _node;
	return (_node);
}
