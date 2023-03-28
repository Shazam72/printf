#include "main.h"
/**
 * char_converter - converter for char
 * @ap: variadic list of argument
 * Return: number of printed bytes
 */
int char_converter(va_list ap)
{
	char c = va_arg(ap, int);

	if (c == '\0')
		return (0);
	write(1, &c, 1);
	return (1);
}
