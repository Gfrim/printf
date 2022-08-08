#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int b;
	char *str, *str1;

	str = "Ghana X Nigeria";
	str1 = "Nigeria X Ghana";

	b = _printf("%r\n", str);
	printf("Length: %d\n", b);

	b = _printf("%r\n", str1);
	printf("Length: %d\n", b);
	return (0);
}
