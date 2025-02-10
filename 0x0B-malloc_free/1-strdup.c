#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a new duped string
 */

char *_strdup(char *str)
{
	char *p;

	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	p = malloc(i * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		p[c] = str[c];
	p[c] = '\0';

	return (p);

	free(p);
}
