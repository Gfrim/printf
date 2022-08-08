#include "main.h"

/**
 * _puts - prints a string to standard 
 * output
 * @str: pointer to string
 *
 * Return: number of chars
 */

int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
