#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: the buffer or memory area to fill
 * @b: the constant byte/char to fill with
 * @n: the size of bytes to fill
 *
 * Description: fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
