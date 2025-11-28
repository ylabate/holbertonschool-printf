#include "main.h"

/**
 * print_hexadecimal_upper - Prints the uppercase hexadecimal
 * representation of an integer.
 * @list: va_list containing the integer to print.
 * @buffer: Buffer to store the resulting hexadecimal string.
 *
 * Return: Number of characters printed.
 */
int print_hexadecimal_upper(va_list list, char *buffer)
{

	unsigned int integer = va_arg(list, int);
	char hexa_upper[] = {"0123456789ABCDEF"};
	int local_buffer_index = 0, buffer_index = 0, end = 0;
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
		local_buffer[local_buffer_index++] = hexa_upper[integer % 16];
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
