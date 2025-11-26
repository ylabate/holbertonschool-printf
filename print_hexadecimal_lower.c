#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer.
 * @list: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_hexadecimal_lower(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	int end = 0;
	int len = 0;
	char hexa_lower[] = {"0123456789abcdef"};
	int local_buffer_index = 0, buffer_index = 0;
	char local_buffer[32];

	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	while (integer > 0)
	{
		local_buffer[local_buffer_index++] = hexa_lower[integer % 16];
		integer = (integer / 16);
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
