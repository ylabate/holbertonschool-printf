#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte).
 */

int _printf(const char *format, ...)
{
	va_list args;
	print_func_ptr print_function;
	int format_index = 0, buffer_index = -1, temp_buffer_index = 0, scale = 1024;
	char *buffer;
	char temp_buffer[1024];

	buffer = malloc(sizeof(char) * scale);
	if (!buffer)
		return (-1);
	va_start(args, format);
	if (format != NULL)
		buffer_index = 0;
	while (format != NULL && format[format_index] != '\0')
	{
		if (format[format_index] == '%')
		{
			print_function = get_type(format, format_index, &buffer_index);
			if (print_function == NULL)
				return (-1);
			temp_buffer_index += print_function(args, &temp_buffer[temp_buffer_index]);
			buffer = dyn_realloc(&scale, buffer, &buffer_index, &temp_buffer_index);
			strcpy(&buffer[buffer_index], temp_buffer);
			buffer_index += temp_buffer_index;
			temp_buffer_index = 0;
			format_index++;
		}
		else
		{
			buffer[buffer_index] = format[format_index];
			buffer_index++;
		}
		format_index++;
	}
	write(1, buffer, buffer_index);
	va_end(args);
	free(buffer);
	return (buffer_index);
}
