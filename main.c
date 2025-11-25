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

	a = _printf("aaaaa%c, %s, %%\n", 'S', "string");
	printf("%d\n", a);
	return (0);
}
