#include "main.h"

/**
 * print_binary - Prints the binary representation of an integer.
 * @list: va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list list)
{

	signed long int integer_long = va_arg(list, int);
	int end = 0;
	int len = 0;
	int buffer_index = 0;
	int negative = 0;
	char buffer[32];

	if (integer_long == 0)
	{
		buffer[0] = '0';
		end++;
	}
	if (integer_long < 0)
	{
		integer_long = -integer_long;
		negative = 1;
	}
	while (integer_long > 0)
	{
		buffer[buffer_index++] = ((integer_long % 2) + '0');
		integer_long = (integer_long / 2);
		end++;
	}
	if (negative == 1)
	{
		end += binary_negative(buffer, buffer_index);
	}
	while (--end >= 0)
	{
		write(1, &buffer[end], 1);
		len++;
	}
	return (len);
}
