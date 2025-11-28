#include "main.h"

/**
 * print_string - Write a string in a buffer
 * @list: va_list containing the string to print.
 * @buffer: buffer where the string will be copied.
 *
 * Return: the number of char printed
 */
int print_string(va_list list, char *buffer)
{
	char *string = va_arg(list, char *);
	int len;
	char *nullcase[] = {"(null)"};

	if (string == NULL)
		string = *nullcase;
	len = strlen(string);
	strcpy(buffer, string);

	return (len);
}
