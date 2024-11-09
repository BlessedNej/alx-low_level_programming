#include <stdio.h>

/**
 * main - main block
 * Description: prints all letters except q and e
 * Return: 0.
 */

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if (m != 'e' && m != 'q')
		{
			putchar(m);
		}
		m++;
	}
	putchar('\n');
	return (0);
}
