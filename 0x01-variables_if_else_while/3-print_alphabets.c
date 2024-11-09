#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints the English alphabet,
 * lower and upper case.
 * Return: 0.
 */

int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
