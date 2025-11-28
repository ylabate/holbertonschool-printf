#include "main.h"

/**
 * print_hexadecimal_lower - Prints the hexadecimal (lowercase)
 * representation of an integer.
 * @list: va_list containing the integer to print.
 * @buffer: Buffer to store the hexadecimal string.
 *
 * Return: Number of characters printed.
 */
int print_hexadecimal_lower(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	int end = 0;
	char hexa_lower[] = {"0123456789abcdef"};
	int local_buffer_index = 0, buffer_index = 0;
	char local_buffer[32];
	/* handle the specific case when the integer is 0 */
	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	/* write the integer converted in hexadecimal in the local buffer reversed*/
	while (integer > 0)
	{
		local_buffer[local_buffer_index++] = hexa_lower[integer % 16];
		integer = (integer / 16);
		end++;
	}
	/* write the local buffer reversed in the global buffer */
	while (--end >= 0)
	{
		buffer[buffer_index] = local_buffer[end];
		buffer_index++;
	}
	return (buffer_index);
}
