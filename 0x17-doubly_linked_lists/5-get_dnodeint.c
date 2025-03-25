#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a node at a particular index of the list
 *
 * @head: pointer to the head of the node
 * @index: index to retrieve its node
 *
 * Return: pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t itr;

	for (itr = 0; itr < index; itr++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
