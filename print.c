#include "main.h"
#include <unistd.h>

/**
 * print - Writes a buffer to standard output.
 * @buf: Pointer to the buffer to write.
 * @length: Number of bytes to write from the buffer.
 *
 * Return: 0 on success.
 */

int print(const char buf)
{
	write(1, &buf, 1);
	return (0);
}
