#include "main.h"

/**
 * print_percent - Prints a percent sign to standard output.
 * @list: va_list (unused)
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
