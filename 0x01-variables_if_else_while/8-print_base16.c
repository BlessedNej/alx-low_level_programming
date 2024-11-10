#include <stdio.h>

/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: 0.
 */

int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (y = 'a'; y < 'g'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
