#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a linked list.
 * @head: pointer to list
 * Return: sum of all the data in the list
 *         or - 0, if empty list
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
