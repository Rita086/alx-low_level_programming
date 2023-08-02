#include "lists.h"
/**
 * listint_len - the amount of elements in a linked list are retuned
 * @h: linked list of type listint_t to cover for
 *
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}
