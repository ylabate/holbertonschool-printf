#include "main.h"

print_func_ptr get_type(const char *format, int format_index, int *printed)
{
	field_t fields[] = {
	{"s", print_string},
	{"c", print_char},
	{"%", print_percent},
	{"i", print_integer},
	{"d", print_integer},
	{"b", print_binary},
	{"u", print_unsigned},
	{"o", print_octal},
	{"x", print_hexadecimal_lower},
	{"X", print_hexadecimal_upper},
	{"p", print_adresse},
	{NULL, NULL}
	};
	int field_index = 0;

	format_index++;
	/* check if the char given is in the field list*/
	while (fields[field_index].base != NULL &&
		*fields[field_index].base != format[format_index])
		field_index++;
	/* in a null case */
	if (fields[field_index].function == NULL)
	{
		/* if there is nothing after the % */
		if (format[format_index] == '\0')
			return (NULL);
	}
	(void)printed;
	return (fields[field_index].function);
}
