#include "main.h"
#include <stdarg.h>

/**
 * _printf - function to print to standard
 * output according to format provided
 * @format: format specified
 * @...: elipsis
 *
 * Return: string and int
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
			}
		}
	}
	return (c);
}
