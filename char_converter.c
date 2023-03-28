#include "main.h"
/**
 * char_converter - converter for char
 * @ap: variadic list of argument
 * Return: number of printed bytes
 */
int char_converter(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}
