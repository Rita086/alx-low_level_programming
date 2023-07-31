#include "lists.h"

/**
 * delete_nodeint_at_index - a node in a linked
 * list at a particular index is deleted
 * @head: pointer to the first list component
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (z < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	z++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
