#include "main.h"

/**
 * print_integer - print a integer
 * @list: a va_list with the caractère need to be printed
 *
 * Return: the number of char printed
*/
int print_integer(va_list list)
{
	int integer = va_arg(list, int);
	signed long int integer_long;
	int end = 0, rev_end, len = 0;
	int buffer_index = 0;
	char buffer[12];

	integer_long = integer;
	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
	}
	if (integer < 0)
	{
		write(1, "-", 1);
		len++;
		integer_long = -integer_long;
	}
	while (integer_long > 0 && buffer_index < 32)
	{
		buffer[buffer_index++] = ((integer_long % 10) + '0');
		integer_long = (integer_long / 10);
		end++;
	}
	rev_end = end - 1;
	while (rev_end >= 0)
	{
		write(1, &buffer[rev_end], 1);
		rev_end--;
		len++;
	}
	return (len);
}
