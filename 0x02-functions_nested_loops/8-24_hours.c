#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * Description: starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h;
	int m;
	int x;
	int y;

	for (h = 0; h <= 2; h++)
	{
		for (m = 0; m <= 3; m++)
		{
			for (x = 0; x <= 5; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					_putchar(h + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar('\n');
				}
			}

		}
	}
}
