#include <stdio.h>

/**
 * main - main block
 *
 * Description: a program that prints all possible different combinations
 * of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0.
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 56; x++)
	{
		for (y = 49; y < 57; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x < 55 || y < 56 || z < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
