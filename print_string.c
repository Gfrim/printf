#include "main.h"

/**
 * print_string - a function to iterate through
 * a string and print it accordingly
 * @s: a string pointer
 *
 * Return: int
 */

int print_string(char *s)
{
	int c = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		c++;
	}
	return (c);
}
