#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: parameter to check character
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && c != (91 - 96))
	{
		return (1);
	}
	else
		return (0);
}
