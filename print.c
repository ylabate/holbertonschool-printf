#include "main.h"
#include <unistd.h>

/**
 * print - Writes a buffer to standard output.
 * @buf: Pointer to the buffer to write.
 * @length: Number of bytes to write from the buffer.
 *
 * Return: 0 on success.
 */

int print(void *buf, size_t length)
{
	write(1, buf, length);
	return (0);
}
