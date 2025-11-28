#include "main.h"

/**
 * print_null - Handles printing of unknown format specifiers.
 * @buffer: The buffer to write to.
 * @format: The format string containing the unknown specifier.
 *
 * Return: The number of characters written to the buffer.
 */
int print_null(char *buffer, const char *format)
{
	if (format == NULL)
		return (0);
	/* add the % and the following character in the global buffer */
	memcpy(buffer, format, 2);

	return (2);
}
