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

	a = _printf("Let's print a simple sentence.\n");
	printf("%d\n", a);
	return (0);
}
