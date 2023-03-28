#include "main.h"

/**
 * string_converter - converter function for strings
 * @ap: variadic list of argument
 * Return: number of bytes printed
 */
int string_converter(va_list ap)
{
	char *str = va_arg(ap, char*);
	unsigned int len = strlen(str);

	write(STDOUT_FILENO, str, len);
	return (len);
}
