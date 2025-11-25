#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = _printf("%d", INT_MIN);
	_printf("\n%d", a);
	return (0);
}
