#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add_nodeint_end
 * @head: head
 * @n: value node
 *
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_node, *currentNode;

	_node = (listint_t *)malloc(sizeof(listint_t));
	currentNode = (listint_t *)malloc(sizeof(listint_t));
	if (currentNode == NULL || _node == NULL)
		return (NULL);
	_node->n = n;
	_node->next = NULL;
	if (*head == NULL)
	{
		*head = _node;
		return (_node);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
		currentNode = currentNode->next;
	currentNode->next = _node;
	return (_node);
}
