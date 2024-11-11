#include <stdio.h>

/**
 * main - main block
 *
 * Description: a program that prints all possible combinations of
 * two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 nd 1
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0.
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 99; x++)
	{
		for (y = 1; y < 100; y++)
		{
			if (x < y)
			{
				putchar('0' + (x / 10));
				putchar('0' + (x % 10));
				putchar(' ');
				putchar('0' + (y / 10));
				putchar('0' + (y % 10));

				if (x < 98 || y < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
