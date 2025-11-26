#include "main.h"

/**
 * print_integer - print a integer
 * @list: a va_list with the caractère need to be printed
 *
 * Return: the number of char printed
*/
int print_unsigned(va_list list)
{
	unsigned int integer = va_arg(list, int);
	unsigned long int integer_long;
	int end = 0, rev_end, len = 0;
	int buffer_index = 0;
	char buffer[11];

	integer_long = integer;
	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
	}
	while (integer_long > 0 && buffer_index < 11)
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
