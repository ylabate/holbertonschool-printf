#include "main.h"

/**
 * print_percent - Prints a percent sign to standard output.
 * @list: va_list (unused)
 */
void print_percent(va_list list)
{
	char c = '%';

	(void)list;
	write(1, &c, 1);
}
