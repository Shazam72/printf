#include "main.h"

/**
 * print_str - Function that print strings
 * @c: string to print
 */
void print_str(char *c)
{
	while (*c != '\0')
		write(1, c++, 1);
}
