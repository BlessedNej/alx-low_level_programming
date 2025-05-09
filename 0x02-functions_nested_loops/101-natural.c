#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 *
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
		{
			total += i;
		}
		else if (i % 5 == 0)
		{
			total += i;
		}
		i++;
	}
	printf("%d\n", total);

	return (0);
}
