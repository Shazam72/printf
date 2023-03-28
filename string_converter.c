#include "main.h"

/**
 * string_converter - converter function for strings
 * @ap: variadic list of argument
 * Return: number of bytes printed
 */
int string_converter(va_list ap)
{
	char *str = NULL;
	unsigned int len = 0;

	str = va_arg(ap, char*);
	if (str == NULL)
		return (0);
	len = strlen(str);
	write(STDOUT_FILENO, str, len);
	return (len);
}
