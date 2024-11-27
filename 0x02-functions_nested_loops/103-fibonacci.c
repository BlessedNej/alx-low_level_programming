#include <stdio.h>
#include <math.h>

/**
 * main - prints the sum of even numbers in a finonacci sequence
 *
 * Description: highest number in the fibonacci sequence is 4000000
 *
 * Return: 0.
 */


int main(void)
{
	int i;
	unsigned long int j, k, highest, sum;

	i = 1;
	j = 2;
	highest = 0;
	sum = 0;

	while (highest <= 4000000)
	{
		if (j < 4000000 && (j % 2 == 0))
		{
			sum += j;
		}

		k = j;
		j += i;
		i = k;
		highest++;
	}
	printf("%lu\n", sum);

	return (0);
}
