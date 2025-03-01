#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: points to the list
 * @index: node to be located
 * Return: nth node located OR NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
