#include "main.h"

/**
 * print_unsigned_integer - print a unsigned integer
 * @list: a va_list with the caractère need to be printed
 * @buffer: a pointer to the buffer where the number will be stored as a string
 *
 * Return: the number of char printed
*/
int print_unsigned_integer(va_list list, char *buffer)
{
	unsigned int integer = va_arg(list, int);
	int local_buffer_index = 0, buffer_index = 0, end = 0;
	char local_buffer[11];
	/* handle the specifique case when the unsigned integer is 0 */
	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	/* write the unsigned integer in the local buffer in reversed */
	while (integer > 0 && local_buffer_index < 11)
	{
		local_buffer[local_buffer_index++] = ((integer % 10) + '0');
		integer = (integer / 10);
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
