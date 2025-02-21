#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array.
 *         NULL, if min > max
 *         NULL, if malloc fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i, range;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
