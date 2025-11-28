#include "main.h"

/**
 * print_char - Prints a character to the output
 * @list: va_list containing the character to print
 * @buffer: pointer to the buffer where the character will be written
 *
 * Return: the number of char printed
 */
int print_char(va_list list, char *buffer)
{
	/* write the char in a local buffer */
	char local_buffer = va_arg(list, int);
	/* write the local buffer in the global buffer */
	*buffer = local_buffer;
	return (1);
}
