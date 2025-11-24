#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int print(const char *buf);
int _printf(const char *format, ...);

/**
 * struct field_converter - Struct that holds a base character and a
 * function pointer for field conversion
 * @base: The base character
 * @field: Pointer to the field conversion function
 */
typedef struct field_converter
{
	char base;
	void (*field)(va_list);
} field_t;

void print_string(va_list list);
void print_char(va_list list);
void print_percent(va_list list);

#endif
