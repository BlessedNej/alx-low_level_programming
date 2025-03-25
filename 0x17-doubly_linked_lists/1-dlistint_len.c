#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_no = 0;

	while (h)
	{
		elem_no += 1;
		h = h->next;
	}

	return (elem_no);
}
