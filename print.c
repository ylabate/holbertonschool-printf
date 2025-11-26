#include "main.h"
#include <unistd.h>

/**
 * print - Writes a buffer to standard output.
 * @buf: Pointer to the buffer to write.
 */

void print(const char buf)
{
	write(1, &buf, 1);
}
