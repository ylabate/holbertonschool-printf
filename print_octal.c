#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format
 * @list: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_octal(va_list list)
{

	unsigned int integer_long = va_arg(list, int);
	int end = 0;
	int len = 0;
	int buffer_index = 0;
	char buffer[12];

	if (integer_long == 0)
	{
		buffer[0] = '0';
		end++;
	}
	while (integer_long > 0)
	{
		buffer[buffer_index++] = ((integer_long % 8) + '0');
		integer_long = (integer_long / 8);
		end++;
	}
	while (--end >= 0)
	{
		write(1, &buffer[end], 1);
		len++;
	}
	return (len);
}
