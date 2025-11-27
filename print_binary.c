#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer.
 * @list: va_list containing the integer to print.
 * @buffer: Buffer where the binary representation will be stored.
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	int end = 0;
	int len = 0;
	int local_buffer_index = 0, buffer_index = 0;
	char local_buffer[32];

	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	while (integer > 0)
	{
		local_buffer[local_buffer_index++] = ((integer % 2) + '0');
		integer = (integer / 2);
		end++;
	}
	while (--end >= 0)
	{
		buffer[buffer_index] = local_buffer[end];
		buffer_index++;
		len++;
	}
	return (len);
}
