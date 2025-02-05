#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - a helper function to solve _sqrt_recursion
 *
 * @n: int number
 * @sq: number to determine if square root
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
