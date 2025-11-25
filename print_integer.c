#include "main.h"

int print_integer(va_list list)
{
	int integer = va_arg(list, int);
	int len = 0, rev_len;
	int buffer_index = 0;
	char buffer[12];

	if (integer < 0)
	{
		buffer[buffer_index++] = '-';
		integer = -integer;
		len++;
	}
	if (integer == 0)
	{
		buffer[0] = '0';
		len++;
	}
	while (integer > 0)
	{
		buffer[buffer_index++] = ((integer % 10) + '0');
		integer = (integer / 10);
		len++;
	}
	rev_len = len - 1;
	while (rev_len >= 0)
	{
		write(1, &buffer[rev_len], 1);
		rev_len--;
	}
	return (len);
}
