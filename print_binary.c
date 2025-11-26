#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer.
 * @list: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	int end = 0;
	int len = 0;
	int buffer_index = 0;

	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
	}
	while (integer > 0)
	{
		buffer[buffer_index++] = ((integer % 2) + '0');
		integer = (integer / 2);
		end++;
	}
	while (--end >= 0)
	{
		write(1, &buffer[end], 1);
		len++;
	}
	return (len);
}
