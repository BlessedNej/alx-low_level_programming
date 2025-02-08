#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments
 *
 * Description: All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
