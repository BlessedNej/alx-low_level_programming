#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: the string to be reversed
 * Description: Not printing out, only reversing
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, len;

	len = 0;
	j = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}
