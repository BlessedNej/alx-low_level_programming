#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int i, n;

	for (i = 1; i < 11; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + 48);
			}
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}
