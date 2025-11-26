#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct field_converter - Struct that holds a base character and a
 * function pointer for field conversion
 * @base: The base character
 * @function: Pointer to the field conversion function
 */
typedef struct field_converter
{
	char *base;
	int (*function)(va_list, char *);
} field_t;

/* main function */
int _printf(const char *format, ...);

/* realloc function when the buffer is full */
char *dyn_realloc(int *scale, char *buffer, int *buffer_index, int *temp_buf);

/* get the format need to be printed */
typedef int (*print_func_ptr)(va_list list, char *buffer);
print_func_ptr get_type(const char *format, int format_index, int *char_print);

/* different case */
int print_string(va_list list, char *buffer);
int print_char(va_list list, char *buffer);
int print_percent(va_list list, char *buffer);
int print_integer(va_list list, char *buffer);
int print_binary(va_list list, char *buffer);
int print_unsigned(va_list list, char *buffer);
int print_octal(va_list list, char *buffer);
int print_hexadecimal_lower(va_list list, char *buffer);
int print_hexadecimal_upper(va_list list, char *buffer);

#endif
