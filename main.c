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
	char *str = "Hello, World!";
	char c = 'A';
	int num = 42;
	int neg = -123;

	printf("=== Tests de _printf vs printf ===\n\n");

	/* Test %s */
	printf("Test %%s avec chaîne normale:\n");
	printf("printf:  %s\n", str);
	_printf("_printf: %s\n", str);
	printf("\n");

	printf("Test %%s avec chaîne vide:\n");
	printf("printf:  %s\n", "");
	_printf("_printf: %s\n", "");
	printf("\n");

	/* Test %c */
	printf("Test %%c:\n");
	printf("printf:  %c\n", c);
	_printf("_printf: %c\n", c);
	printf("\n");

	/* Test %% */
	printf("Test %%%%:\n");
	printf("printf:  %%\n");
	_printf("_printf: %%\n");
	printf("\n");

	/* Test %i */
	printf("Test %%i avec nombre positif:\n");
	printf("printf:  %i\n", num);
	_printf("_printf: %i\n", num);
	printf("\n");

	printf("Test %%i avec nombre négatif:\n");
	printf("printf:  %i\n", neg);
	_printf("_printf: %i\n", neg);
	printf("\n");

	printf("Test %%i avec INT_MIN:\n");
	printf("printf:  %i\n", INT_MIN);
	_printf("_printf: %i\n", INT_MIN);
	printf("\n");

	/* Test %d  (même que %i) */
	printf("Test %%d avec nombre positif:\n");
	printf("printf:  %d\n", num);
	_printf("_printf: %d\n", num);
	printf("\n");

	/* Test %b  (binaire, non standard dans printf) */
	printf("Test %%b avec nombre positif:\n");
	printf("printf:  N/A (%%b non standard)\n");
	_printf("_printf: %b\n", num);
	printf("\n");

	printf("Test %%b avec nombre négatif:\n");
	printf("printf:  N/A\n");
	_printf("_printf: %b\n", neg);
	printf("\n");

	printf("Test %%b avec INT_MIN:\n");
	printf("printf:  N/A\n");
	_printf("_printf: %b\n", INT_MIN);
	printf("\n");

	printf("=== Fin des tests ===\n");
	return (0);
}
