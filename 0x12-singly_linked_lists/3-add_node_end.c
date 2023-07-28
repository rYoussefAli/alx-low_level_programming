#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: head
 * @str: value new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode, *curr;

	if (!str)
		return (NULL);
	nNode = malloc(sizeof(*nNode));
	if (!nNode)
		return (NULL);
	nNode->str = strdup(str);
	if (nNode->str == NULL)
	{
		free(nNode);
		return (NULL);
	}
	nNode->len = strlen(str);
	nNode->next = NULL;
	if (*head == NULL)
		*head = nNode;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = nNode;
	}
	return (nNode);
}
