#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
