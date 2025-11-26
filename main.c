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
	int len1, len2;

	/* Test with integers */
	len1 = _printf("Integer: %d\n", 42);
	len2 = printf("Integer: %d\n", 42);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	/* Test with negative integers */
	len1 = _printf("Negative integer: %d\n", -42);
	len2 = printf("Negative integer: %d\n", -42);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	/* Test with INT_MIN and INT_MAX */
	len1 = _printf("INT_MIN: %d\n", INT_MIN);
	len2 = printf("INT_MIN: %d\n", INT_MIN);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	len1 = _printf("INT_MAX: %d\n", INT_MAX);
	len2 = printf("INT_MAX: %d\n", INT_MAX);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	/* Test with zero */
	len1 = _printf("Zero: %d\n", 0);
	len2 = printf("Zero: %d\n", 0);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	/* Test with multiple arguments */
	len1 = _printf("Multiple: %d, %d, %d\n", 1, 2, 3);
	len2 = printf("Multiple: %d, %d, %d\n", 1, 2, 3);
	printf("_printf length: %d, printf length: %d\n", len1, len2);

	return (0);
}
