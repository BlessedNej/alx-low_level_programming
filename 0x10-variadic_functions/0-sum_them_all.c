#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first argument
 * @...: variadic arguments
 *
 * Return: 0, if n is 0, otherwise, result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mysum;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);

	result = 0;

	va_start(mysum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(mysum, int);
	}

	va_end(mysum);
	return (result);
}
