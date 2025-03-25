#include "lists.h"

/**
 * *add_dnodeint_end - adds node to the end of a list
 *
 * @head: double pointer to the head of the list
 * @n: the data of the new node to be inserted
 *
 * Return: pointer to the new node inserted
 *         or NULL, if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = (*head);

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	new->prev = temp;

	return (new);
}
