#include "main.h"

/**
 * print_adresse - Prints the address of a pointer in hexadecimal format.
 * @list: va_list containing the pointer to print.
 * @buffer: Buffer to store the resulting string.
 *
 * Return: Number of characters written to buffer.
 */
int print_adresse(va_list list, char *buffer)
{
	void *pointer = va_arg(list, void *);
	size_t adresse;
	int buffer_index = 0, local_buffer_index = 0, end = 0, len = 0;
	char hexa[] = {"0123456789abcdef"};
	char local_buffer[32];
	char null_str[] = {"(nil)"};
	int null_index = 0;

	adresse = (size_t)pointer;
	if (adresse == 0)
	{
		while (null_str[null_index])
			buffer[buffer_index++] = null_str[null_index++];
		return (null_index);
	}

	buffer[buffer_index++] = '0';
	buffer[buffer_index++] = 'x';

	while (adresse > 0)
	{
		local_buffer[local_buffer_index++] = hexa[adresse % 16];
		adresse = (adresse / 16);
		end++;
	}
	while (--end >= 0)
	{
		buffer[buffer_index] = local_buffer[end];
		buffer_index++;
		len++;
	}
	return (len + 2);
}
