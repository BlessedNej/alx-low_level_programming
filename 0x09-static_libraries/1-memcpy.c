#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 * @dest: pointer to buffer to be copied into
 * @src: pointer to buffer to be copied
 * @n: number of elements to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
