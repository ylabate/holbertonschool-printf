#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
	va_list args;
	int format_index = 0, char_printed = -1;
	print_func_ptr print_function;


	va_start(args, format);
	if (format != NULL)
		char_printed = 0;
	while (format != NULL && format[format_index] != '\0')
	{
		if (format[format_index] == '%')
		{
			print_function = get_type(format, format_index, &char_printed);
			if (print_function == NULL)
				return (-1);
			char_printed += print_function(args);
			format_index++;
		}
		else
		{
			print(format[format_index]);
			char_printed++;
		}
		format_index++;
	}

	va_end(args);
	return (char_printed);
}
