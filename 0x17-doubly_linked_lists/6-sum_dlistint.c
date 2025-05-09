#include "lists.h"

/**
 * sum_dlistint - sums the total number of data in a d_list
 *
 * @head: pointer to the head of the list
 *
 * Return: total number of data(n).
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
