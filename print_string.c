#include "main.h"

/**
 * print_string - Prints a string from a va_list argument.
 * @list: va_list containing the string to print.
 */
int print_string(va_list list)
{
	char *string = va_arg(list, char *);
	int len;
	char *nullcase[] = {"(null)"};

	if (string == NULL)
		string = *nullcase;
	len = strlen(string);
	write(1, string, len);

	return (len);
}
