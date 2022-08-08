#include "main.h"
#include <stdarg.h>

/**
 * _printf - a function that replicates
 * the staandard printf function
 * @format: format specifier
 * @...: ellipses
 *
 * Return: as wanted
 */

int _printf(const char *format, ...)
{
	int c = 0, i;
	va_list ap;

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i += 2)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			c++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					c++;
					break;
				case 's':
					c += print_string(va_arg(ap, char *));
					break;
				case '%':
					_putchar('%');
					c++;
					break;
				case 'd':
					c += print_integer(va_arg(ap, int));
					break;
				case 'i':
					c += print_integer(va_arg(ap, int));
					break;
				case 'b':
					c += print_binary(va_arg(ap, int));
					break;
				case 'o':
					c += print_octal(va_arg(ap, int));
					break;
				default:
					break;
			}
		}
	}
	return (c);
}
