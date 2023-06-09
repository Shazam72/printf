#include "main.h"
/**
 * _printf - custom implementation of stdio function printf
 * @format: formated string
 * Return: 0 if no problem appear
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, len = 0;


	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			converter func = get_converter(format[i + 1]);

			if (format[i + 1] == '%')
			{
				write(1, &format[i++], 1);
				len += 1;
			}
			else if (func != NULL)
			{
				len += func(ap);
				i++;
			}
			else
			{
				write(1, &format[i], 1);
				len += 1;
			}
				continue;
		}
		else
		{
			write(1, &format[i], 1);
			len += 1;
		}
	}
	va_end(ap);

	return (len);
}
