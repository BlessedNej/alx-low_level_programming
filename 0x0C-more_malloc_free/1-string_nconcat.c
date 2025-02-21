#include "main.h"
#include <stdlib.h>

/**
 * _strlen - helper function to determine the length of a string.
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;

	return (i);
}

/**
 * *string_nconcat - concatenates two strings.
 * @s1: one of the strings to be concatenated
 * @s2: second string for the concatenation
 *
 * @n: number of bytes to concat from s2
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, i, j, len;

	if (s1 == NULL)  /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num = n;

	if (num < 0) /* account for negative n bytes */
		return (NULL);

	if (num >= _strlen(s2))  /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;  /* +1 to account for NULL pointer */

	p = malloc(sizeof(char) * len);  /* malloc and check for error */
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < num; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
