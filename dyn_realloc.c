#include "main.h"

/**
 * dyn_realloc - Dynamically reallocates a buffer if needed.
 * @scale: Pointer to the current buffer size.
 * @buffer: Pointer to the buffer to be reallocated.
 * @buffer_index: Pointer to the current index in the buffer.
 * @temp_buf: Pointer to the temporary buffer size to add.
 *
 * Return: Pointer to the (possibly reallocated) buffer.
 */
char *dyn_realloc(int *scale, char *buffer, int *buffer_index, int *temp_buf)
{
	if (*temp_buf + *buffer_index >= *scale)
	{
		*scale += *scale;
		buffer = realloc(buffer, *scale);
	}
	return (buffer);
}
