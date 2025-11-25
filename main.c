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

	a = _printf("%d", 2-10);
	_printf("\n%d", a);
	return (0);
}
