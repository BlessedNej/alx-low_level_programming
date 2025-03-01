#include "lists.h"
/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t nelem = 0;

	while (new_node != NULL)
	{
		nelem += 1;
		new_node = new_node->next;
	}

	return (nelem);
}
