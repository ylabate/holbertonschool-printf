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
	int format_index = 0, field_index, char_printed = -1;
	field_t fields[] = {
	{"s", print_string},
	{"c", print_char},
	{"%", print_percent},
	{"i", print_integer},
	{"d", print_integer},
	{"b", print_binary},
	{NULL, NULL}
	};

	va_start(args, format);
	if (format != NULL)
		char_printed = 0;
	while (format != NULL && format[format_index] != '\0')
	{
		if (format[format_index] == '%')
		{
			format_index++;
			field_index = 0;
			while (fields[field_index].base != NULL &&
				*fields[field_index].base != format[format_index])
				field_index++;
			if (fields[field_index].field == NULL)
			{
				if (format[format_index] == '\0')
					return (-1);
				write(1, &format[format_index - 1], 2);
				char_printed += 2;
				format_index++;
				continue;
			}
			char_printed += fields[field_index].field(args);
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
