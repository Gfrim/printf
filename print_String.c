#include "main.h"

/**
 * print_String - print string
 * @val: argument
 *
 * Return: length of string
 */

int print_String(va_list a)
{
	register short len = 0;
	char *res, *s = va_arg(a, char *);
	int c;

	if (!s)
		return (_puts(NULL_STRING));
	for (; *s; s++)
	{
		if (isNonAlphaNumeric(*s))
		{
			c += _puts("\\x");
			res = convert(*s, 16, 0);
			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(*s);
	}
	return (len);
}

/**
 * isNonAlphaNumeric - checks if char is not alpha-
 * numeric char on ASCII table
 * @c: char argument
 *
 * Return: true or false
 */

int isNonAlphNumeric(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * convert - converts base and number into string
 * @num: number
 * @base: base number
 * @lc: flag if hexa values need to be lowercase
 *
 * Return: string
 */

char *convert(unsigned long int num, int base, int lc)
{
	static char *rep, buffer[50];
	char *ptr;

	rep = (lc) ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = NUL;
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num);

	return (ptr);
}
