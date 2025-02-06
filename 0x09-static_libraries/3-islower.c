#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: a parameter to take character arguments
 *
 * Return: 1 if c is lowwrcase
 *         0 if otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
