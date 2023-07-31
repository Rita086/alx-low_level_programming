#include "lists.h"

/**
 * get_nodeint_at_index - node at a particular
 * index in a linked list is returned
 * @head: first node in the list
 * @index: Return index of the node
 *
 * Return: pointer of the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}
	return (temp ? temp : NULL);
}
