#include "main.h"

int print_integer(va_list list)
{
	int integer = va_arg(list, int);
	int end = 0, rev_end, len = 0;
	int buffer_index = 0;
	char buffer[12];

	if (integer < 0)
	{
		write(1, "-", 1);
		len++;
		integer = -integer;
	}
	if (integer == 0)
	{
		buffer[0] = '0';
		end++;
		len++;
	}
	while (integer > 0)
	{
		buffer[buffer_index++] = ((integer % 10) + '0');
		integer = (integer / 10);
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
