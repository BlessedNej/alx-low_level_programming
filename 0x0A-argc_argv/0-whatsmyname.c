#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

