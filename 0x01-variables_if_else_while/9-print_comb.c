#include <stdio.h>

/**
 * main - main block
 * Description: prints all possible combinations of single-digit numbers
 * followed by comma and space.
 * Return: 0.
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);

		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
