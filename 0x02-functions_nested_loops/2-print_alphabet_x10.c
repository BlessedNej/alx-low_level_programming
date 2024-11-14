#include "main.h"

/**
 * print_alphabet_x10 - prints lower alphabet ten(10) times.
 *
 * Description: prints ten times with new line after
 * every loop
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
			if (x == 'z')
			{
				_putchar('\n');
			}
		}
	}
}
