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

	a = _printf("%d\n", 200);
	printf("%d\n", a);
	return (0);
}
