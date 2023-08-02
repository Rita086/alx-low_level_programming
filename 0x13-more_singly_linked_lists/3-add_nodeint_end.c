#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end -a node at the end of a linked list is added
 * @head: indicator to the first component in the list
 * @n: input to insert in the new component
 * Return: indicator to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
