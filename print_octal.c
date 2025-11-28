#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format
 * @list: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_octal(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	int local_buffer_index = 0, buffer_index = 0, end = 0;
	char local_buffer[12];

	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	while (integer > 0)
	{
		local_buffer[local_buffer_index++] = ((integer % 8) + '0');
		integer = (integer / 8);
		end++;
	}
	while (--end >= 0)
	{
		buffer[buffer_index] = local_buffer[end];
		buffer_index++;
	}
	return (buffer_index);
}
