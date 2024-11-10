#include <stdio.h>

/**
 * main - main block
 * Description: Prints all lower alphabets in reverse order.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
