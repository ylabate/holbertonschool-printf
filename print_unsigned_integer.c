#include "main.h"

/**
 * print_unsigned - print a unsigned integer
 * @list: a va_list with the caractère need to be printed
 *
 * Return: the number of char printed
*/
int print_unsigned(va_list list, char *buffer)
{
	unsigned int integer = va_arg(list, int);
	unsigned long int integer_long;
	int end = 0, rev_end, len = 0;
	int local_buffer_index = 0, buffer_index = 0;
	char local_buffer[11];

	integer_long = integer;
	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	while (integer_long > 0 && local_buffer_index < 11)
	{
		local_buffer[local_buffer_index++] = ((integer_long % 10) + '0');
		integer_long = (integer_long / 10);
		end++;
	}
	rev_end = end - 1;
	while (rev_end >= 0)
	{
		buffer[buffer_index] = local_buffer[rev_end];
		buffer_index++;
		rev_end--;
		len++;
	}
	return (len);
}
