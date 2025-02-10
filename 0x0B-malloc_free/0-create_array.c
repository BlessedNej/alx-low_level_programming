#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array to create
 * @c: char to initialize the array c.
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	if (size == 0)
		return (NULL);

	ptArray = malloc(size * sizeof(char));

	if (ptArray == NULL)
		return (0);

	for (count = 0; count < size; count++)
		ptArray[count] = c;

	*ptArray = '\0';

	return (ptArray);

	free(ptArray);
}
