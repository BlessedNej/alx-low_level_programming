#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 *
 * @h: the head pointer of the list or to the list
 *
 * Return: the number of node in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h)
	{
		node_no += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_no);
}
