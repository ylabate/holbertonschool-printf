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
	/* if the buffer if full or close to full */
	if (*temp_buf + *buffer_index >= *scale / 0.9)
	{
		*scale = *scale * 2; /* double the scale */
		buffer = realloc(buffer, *scale); /* apply the scale to the buffer */
		if (buffer == NULL) /* if realloc fail */
			return (NULL);
	}
	return (buffer);
}
