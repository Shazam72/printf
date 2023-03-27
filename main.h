#ifndef __MAIN__PRINTF__
#define __MAIN__PRINTF__
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef void (*converter)(va_list);
typedef struct specifier_params {
	char sp;
	converter func;
} specifier_params;
converter get_converter(char c);
void print_str(char*);
int _printf(const char *format, ...);
void char_converter(va_list);
void string_converter(va_list ap);

#endif
