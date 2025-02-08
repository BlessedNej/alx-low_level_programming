#include <stdio.h>

/**
 * main - prints the number of arguments passed into it, followed by newline.
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
