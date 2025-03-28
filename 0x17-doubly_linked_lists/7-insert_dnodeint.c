#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a node at a particular index
 *
 * @h: the double pointer to the head
 * @idx: index to insert at
 * @n: the data of the new node inserted
 *
 * Return: a pointer to the new node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	size_t count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (count = 1; count < idx; count++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
