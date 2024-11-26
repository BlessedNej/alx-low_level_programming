#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: the parameter for number of times
 * Decription: prints times table not greater than 0
 * and not less than 0.
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n > 15 || n < 0)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;

			if (y == 0)
			{
				_putchar(z + '0');
			}
			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z > 9 && z < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if (z > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 100) + '0');
				_putchar((z / 10 % 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
