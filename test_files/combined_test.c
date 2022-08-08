#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, s, d, i, b, perc, u, o, x, X, S;
	
	c = _printf("%c\n", 'A');
	printf("Length: %d\n", c);
	s = _printf("%s\n", "This is a collaboration of Godfred and Esther from Ghans and Nigeria respectively");
	printf("Length: %d\n", s);
	d = _printf("%d\n", 7);
	printf("Length: %d\n", d);
	i = _printf("%i\n", 19);
	printf("Length: %d\n", i);
	b = _printf("%b\n", 45);
	printf("Length: %d\n", b);
	perc = _printf("%%\n");
	printf("Length: %d\n", perc);
	u = _printf("%u\n", 103);
	printf("Length: %d\n", u);
	o = _printf("%o\n", 47);
	printf("Length: %d\n", o);
	x = _printf("%x\n", 23);
	printf("Length: %d\n", x);
	X = _printf("%X\n", 23);
	printf("Length: %d\n", X);
	S = _printf("%S\n", "Alx is really making\nus do hard things");
	printf("Length: %d\n", S);
	return (0);
}
