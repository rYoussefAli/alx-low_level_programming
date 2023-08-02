#include <stdlib.h>
#include "lists.h"
/**
 * reverse_recur - reverse_recur
 * @first: node
 * @second: node reverse
 *
 * Return: listint_t
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *nn = NULL;
	listint_t *pp = NULL;

	nn = first;

	while (nn->next != second)
	{
		pp = nn;
		nn = nn->next;
	}

	if (pp)
		pp->next = first;

	second = first->next;
	first->next = nn->next;

	if (first != nn && second != first)
		second = reverse_recur(second, first);

	nn->next = second;
	return (nn);
}

/**
 * reverse_listint - reverse_listint
 *
 * @head: the list
 *
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	if (!head || !(*head))
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
