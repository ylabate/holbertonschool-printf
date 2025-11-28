#include "main.h"

/**
 * print_percent - Write a percent to the buffer.
 * @list: va_list (unused)
 * @buffer: pointer to the buffer where the percent character will be written
 *
 * Return: the number of char printed
 */
int print_percent(va_list list, char *buffer)
{
	(void)list;
	(void)buffer;

	buffer = "%";
	return (1);
}
