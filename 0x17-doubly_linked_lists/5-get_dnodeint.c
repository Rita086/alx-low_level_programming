#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - outputs the nth node of dlistint_t linked list.
 * @head: pointer to head of list
 * @index: index of the node to search for, starting from 0
 * Return: nothing node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *tmp;

	len = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == len)
			return (tmp);
		len++;
		tmp = tmp->next;
	}
	return (NULL);
}
