#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: buffer string
 * @src: char string
 * @n: number of elements to be copied
 *
 * Description: Your function should work exactly like strncpy
 * Return: dest, the edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
