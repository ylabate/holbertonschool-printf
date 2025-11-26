#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer.
 * @list: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_hexadecimal_upper(va_list list)
{

	unsigned int integer = va_arg(list, int);
	int end = 0;
	int len = 0;
	int buffer_index = 0;
	char buffer[32];
	char hexa_lower[] = {"0123456789ABCDEF"};

	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
	}
	while (integer > 0)
	{
		buffer[buffer_index++] = hexa_lower[integer % 16];
		integer = (integer / 16);
		end++;
	}
	while (--end >= 0)
	{
		write(1, &buffer[end], 1);
		len++;
	}
	return (len);
}
