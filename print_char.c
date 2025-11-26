#include "main.h"

/**
 * print_char - Prints a character to the output
 * @list: va_list containing the character to print
 *
 * Return: the number of char printed
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
