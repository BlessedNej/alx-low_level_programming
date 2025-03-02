#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to be printed.
 *
 * Description: print the second half of the string
 *              if number of characters is odd, then prints (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
