#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabet
 *
 * Description: prints all alphabets in lowercase,
 * followed by a new line.
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
