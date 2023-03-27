#include "main.h"
/**
 * string_converter - converter function for strings
 * @ap: variadic list of argument
 */
void string_converter(va_list ap)
{
	print_str(va_arg(ap, char*));
}
