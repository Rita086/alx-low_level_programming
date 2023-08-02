#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - the head node of a linked list is terminated
 * @head: indicator to the first element in the linked list
 * Return: the data inside the components that was terminated,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int integer;

	if (!head || !*head)
	return (0);
	integer = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (integer);
}
