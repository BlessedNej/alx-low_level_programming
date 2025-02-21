#include "main.h"
#include <stdlib.h>

/**
 * *_calloc -  allocates memory for an array, using malloc.
 * @nmemb: no of elements of the array
 * @size: size of array
 *
 * Return: pointer to the allocated, if successful
 *         NULL, if malloc fails
 *         NULL, if nmemb or size == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		*((char *)(p) + i) = 0;

	return (p);
}
