#include "main.h"

int print_integer(va_list list)
{
	int integer = va_arg(list, int);
	long signed int integer_pos;
	int end = 0, rev_end, len = 0;
	int buffer_index = 0;
	char buffer[12];

	integer_pos = integer;
	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
	}
	if (integer < 0)
	{
		write(1, "-", 1);
		len++;
		integer_pos = -integer_pos;
	}
	while (integer_pos > 0)
	{
		buffer[buffer_index++] = ((integer_pos % 10) + '0');
		integer_pos = (integer_pos / 10);
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
