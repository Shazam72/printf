#include "main.h"

/**
 *get_converter - function that get the correct converter
 *@c: specifier for conversion
 *Return: converter type fonction otherwise NULL
 */
converter get_converter(char c)
{
	specifier_params specifiers[] = {
		{'c', char_converter},
		{'s', string_converter},
		{'\0', NULL}
	};
	int i = 0;

	while (specifiers[i].sp != '\0' && specifiers[i].func != NULL)
	{
		if (specifiers[i].sp == c)
			return (specifiers[i].func);
		i++;
	}
	return (NULL);
}
