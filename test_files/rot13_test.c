#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int test;

	_printf("%R\n", "123");
	test = _printf("%R\n", "hello");
	_printf("Length: %d\n", test);
	test = _printf("%R\n", "Ghana X Nigeria");
	printf("Length: %d\n", test);
	return (0);
}
