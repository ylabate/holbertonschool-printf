#include "main.h"

int print_null(char *buffer, const char *format)
{
	if (format == NULL)
		return (0);

	memcpy(buffer, format, 2);

	return (2);
}
