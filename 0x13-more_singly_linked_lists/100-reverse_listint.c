#include "lists.h"

/**
 * reverse_listint - invert a linked list
 * @start: indicator to the first node
 *
 * Return: idicator to the first node in the new list
 */
listint_t *reverse_listint(listint_t **start)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*start)
	{
	next = (*start)->next;
	(*start)->next = prev;
	prev = *start;
	*start = next;
	}
	*start = prev;
	return (*start);
}
