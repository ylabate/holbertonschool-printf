#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Test function for _printf vs printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len2;
	char *s;

	/* Allocate memory for s and fill it with 1019 'A' characters and a null terminator */
	s = malloc(1020 * sizeof(char));
	if (s == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	for (int i = 0; i < 1019; i++)
		s[i] = 'A';
	s[1019] = '\0';

	/* Test with the given case */

	len2 = _printf("%s%b\n", s, INT_MAX); /* Assuming printf supports %b for binary */
;

	/* Free the allocated memory */
	free(s);

	return (0);
}
