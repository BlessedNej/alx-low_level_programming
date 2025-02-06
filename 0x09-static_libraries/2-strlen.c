#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to evaluate
 * Description: Use of standard library functions is not allowed
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
