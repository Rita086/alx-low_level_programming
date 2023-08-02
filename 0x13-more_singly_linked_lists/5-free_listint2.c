#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a linked list is freed
 * @head: indicator to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;
	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
