#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Test function for _printf vs printf
 *
 * Return: Always 0
 */
int main(void)
{
	int count_printf, count__printf;

	count_printf = printf("%X", -156);
	printf("\n");
	count__printf = _printf("%X", -156);
	printf("\n");
	if (count_printf != count__printf)
		printf("Test %%b failed: printf=%d, _printf=%d\n", count_printf, count__printf);

	printf("\n=== Fin des tests ===\n");
	return (0);
}
