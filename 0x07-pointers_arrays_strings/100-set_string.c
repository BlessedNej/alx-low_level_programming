#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: the string to set value into
 * @to: the string to set its value into another
 */

void set_string(char **s, char *to)
{
	*s = to;
}
