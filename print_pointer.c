#include "main.h"

/**
 * print_pointer - prints an hexadecimal number
 * @val: arguments
 *
 * Return: int
 */

int print_pointer(va_list val)
{
	void *ptr;
	char *S = "(nil)";
	long int a;
	int b, c;

	pts = va_arg(val, coid*);
	if (ptr == NULL)
	{
		for (c = 0; s[c] != '\0'; c++)
			_putchar(s[c]);
		return (c);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_hex_aux(a);
	return (b + 2);
}
