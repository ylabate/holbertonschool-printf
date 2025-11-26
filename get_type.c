#include "main.h"

print_func_ptr get_type(const char *format, int format_index, int *char_printed)
{
	field_t fields[] = {
	{"s", print_string},
	{"c", print_char},
	{"%", print_percent},
	{"i", print_integer},
	{"d", print_integer},
	{"b", print_binary},
	{NULL, NULL}
	};
	int field_index = 0;

	format_index++;
	/* check if the char given is in the field list*/
	while (fields[field_index].base != NULL &&
		*fields[field_index].base != format[format_index])
		field_index++;
	if (fields[field_index].function == NULL)
	{
		if (format[format_index] == '\0')
			return (NULL);
		write(1, &format[format_index - 1], 2);
		*char_printed += 2;
	}
	return (fields[field_index].function);
}
