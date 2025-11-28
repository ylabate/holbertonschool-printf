#include "main.h"

/**
 * print_integer - print a integer
 * @list: a va_list with the caractère need to be printed
 * @buffer: a pointer to the buffer where the integer will be written
 *
 * Return: the number of char printed
*/
int print_integer(va_list list, char *buffer)
{
	signed long int integer = va_arg(list, int);
	int local_buffer_index = 0, buffer_index = 0, end = 0;
	char local_buffer[12];

	/* handle the specific case when the int is 0 */
	if (integer == 0)
	{
		local_buffer[0] = '0';
		end++;
	}
	/* if it's a negatif add - in the buffer */
	if (integer < 0)
	{
		buffer[buffer_index++] = '-';
		integer = -integer;
	}
	/* write the integer in the local buffer reversed */
	while (integer > 0 && local_buffer_index < 12)
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
