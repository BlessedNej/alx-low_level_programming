#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: parameter for last digit.
 *
 * Return: value.
 */

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		m = (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = -1 * (n % 10);
		_putchar('0' + m);
		return (m);
	}
}
