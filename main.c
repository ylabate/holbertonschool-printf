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
	int count_printf, count__printf;

	printf("=== Tests de _printf vs printf ===\n\n");

	/* Test %s */
	printf("Test %%s avec chaîne normale:\n");
	count_printf = printf("printf:  %s\n", str);
	count__printf = _printf("_printf: %s\n", str);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	printf("Test %%s avec chaîne vide:\n");
	count_printf = printf("printf:  %s\n", "");
	count__printf = _printf("_printf: %s\n", "");
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	/* Test %c */
	printf("Test %%c:\n");
	count_printf = printf("printf:  %c\n", c);
	count__printf = _printf("_printf: %c\n", c);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	/* Test %% */
	printf("Test %%%%:\n");
	count_printf = printf("printf:  %%\n");
	count__printf = _printf("_printf: %%\n");
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	/* Test %i */
	printf("Test %%i avec nombre positif:\n");
	count_printf = printf("printf:  %i\n", num);
	count__printf = _printf("_printf: %i\n", num);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	printf("Test %%i avec nombre négatif:\n");
	count_printf = printf("printf:  %i\n", neg);
	count__printf = _printf("_printf: %i\n", neg);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	printf("Test %%i avec INT_MIN:\n");
	count_printf = printf("printf:  %i\n", INT_MIN);
	count__printf = _printf("_printf: %i\n", INT_MIN);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	/* Test %d  (même que %i) */
	printf("Test %%d avec nombre positif:\n");
	count_printf = printf("printf:  %d\n", num);
	count__printf = _printf("_printf: %d\n", num);
	if (count_printf == count__printf)
		printf("Counts match: %d\n", count_printf);
	else
		printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
	printf("\n");

	/* Test %b  (binaire, non standard dans printf) */
	printf("Test %%b avec nombre positif:\n");
	printf("printf:  N/A (%%b non standard)\n");
	count__printf = _printf("_printf: %b\n", num);
	printf("_printf count: %d\n", count__printf);
	printf("\n");

	printf("Test %%b avec nombre négatif:\n");
	printf("printf:  N/A\n");
	count__printf = _printf("_printf: %b\n", neg);
	printf("_printf count: %d\n", count__printf);
	printf("\n");

	printf("Test %%b avec INT_MIN:\n");
	printf("printf:  N/A\n");
	count__printf = _printf("_printf: %b\n", INT_MIN);
	printf("_printf count: %d\n", count__printf);
	printf("\n");

    /* test %u unsigned */
    printf("Test %%u avec unsigned positif:\n");
    count_printf = printf("printf:  %u\n", (unsigned int)num);
    count__printf = _printf("_printf: %u\n", (unsigned int)num);
    if (count_printf == count__printf)
        printf("Counts match: %d\n", count_printf);
    else
        printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
    printf("\n");

    printf("Test %%u avec unsigned grand (UINT_MAX):\n");
    count_printf = printf("printf:  %u\n", UINT_MAX);
    count__printf = _printf("_printf: %u\n", UINT_MAX);
    if (count_printf == count__printf)
        printf("Counts match: %d\n", count_printf);
    else
        printf("Counts differ: printf=%d, _printf=%d\n", count_printf, count__printf);
    printf("\n");
	
	printf("=== Fin des tests ===\n");
	return (0);
}
