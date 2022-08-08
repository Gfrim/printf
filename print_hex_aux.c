#include "main.h"

/**
 * print_hex_aux - prints an hexadecimal number
 * @num: arguments
 *
 * Rteurn: int
 */

int print_hex_aux(unsigned long int n)
{
	long int i, *arr, c = 0;
	unsigned long int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(long int));

	for (i = 0; i < c; i++)
	{
		arr[i] = temp % 15;
		temp /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}
