#include "main.h"
#include <unistd.h>

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
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}
	len = strlen(str);
	write(STDOUT_FILENO, str, len);
	return (len);
}
