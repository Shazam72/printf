#ifndef __MAIN__PRINTF__
#define __MAIN__PRINTF__
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef int (*converter)(va_list);
typedef struct specifier_params {
	char sp;
	converter func;
} specifier_params;
converter get_converter(char c);
int _printf(const char *format, ...);
int char_converter(va_list);
int string_converter(va_list ap);

#endif
