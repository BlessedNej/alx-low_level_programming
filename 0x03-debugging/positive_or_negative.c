#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - mainGet a random number and print the number block
 * and if it is positive, negative, or zero
 *
 * @i: parameter to take arguments
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
