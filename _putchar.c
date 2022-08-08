#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes argument to stdout
 * @c: character
 *
 * Return: int
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
