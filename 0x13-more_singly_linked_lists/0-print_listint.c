#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nelem = 0;

	const listint_t *new_node;

	new_node = h;

	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		nelem += 1;
		new_node = new_node->next;
	}

	return (nelem);
}
