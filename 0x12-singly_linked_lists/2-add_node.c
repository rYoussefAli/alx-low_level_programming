#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add_node
 * @head: head
 * @str: value new node
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;

	if (str == NULL)
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
	nNode->next = *head;
	*head = nNode;
	return (nNode);
}
