#include "main.h"
void char_converter(va_list ap)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
}
