#include "main.h"

int print_integer(va_list list)
{
	int integer = va_arg(list, int);
	int len = 0;
	int buffer_index = 0;
	char *buffer[12];

	if (integer < 0)
	{
		*buffer[buffer_index++] = '-';
		integer = -integer;
		len++;
	}
	while (integer > 0)
	{
		*buffer[buffer_index++] = ((integer % 10) + '0');
		integer = (integer / 10);
		len++;
	}
	write(1, buffer, len);
	return (len);
}
