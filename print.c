#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - custom implementation of stdio function printf
 * @format: formated string
 * Return: 0 if no problem appear
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;


	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{

			converter func = get_converter(format[i + 1]);

			if (format[i + 1] == '%')
			{
				write(1, &format[i++], 1);
				continue;
			}
			if (func != NULL)
			{
				func(ap);
				i++;
				continue;
			}
			else
				write(1, &format[i], 1);
		}
		else
			write(1, &format[i], 1);
	}
	va_end(ap);

	return (0);
}
