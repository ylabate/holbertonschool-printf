#include "main.h"

/**
 * binary_negative - Negates 32-bit binary string
 * @buffer: char array of '0'/'1'
 * @buffer_index: the position of the last byte writed
 * Return: Pointer to the modified buffer.
 */
int binary_negative(char *buffer, int buffer_index)
{
	int length = 0;
	/* fill the empty part of the array with 0 */
	while (buffer_index < 32)
	{
		buffer[buffer_index++] = '0';
		length++;
	}
	/* reverse the 1 and 0 with the XOR operand */
	for (buffer_index = 0; buffer_index < 32; buffer_index++)
		buffer[buffer_index] ^= 1;

	buffer_index = 0;
	/* Manually add one to a binary number */
	while (buffer_index < 32)
	{
		if (buffer[buffer_index] == '1')
			buffer[buffer_index] = '0';
		else
		{
			buffer[buffer_index] = '1';
			break;
		}
		buffer_index++;
	}
	return (length);
}
