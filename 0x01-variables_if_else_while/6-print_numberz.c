#include <stdio.h>

/**
 * main - main block
 * Description: prints all single decimals using putchar
 * Return: 0.
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
