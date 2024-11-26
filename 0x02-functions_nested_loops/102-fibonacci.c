#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Description: adds comma followed by space after each number
 * and new line after the last number.
 *
 * Return: 0.
 */

int main(void)
{
	long int i = 1, j = 2;
	long int k;
	int count = 2;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else if (count < 50)
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
