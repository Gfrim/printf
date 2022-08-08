# Printf Team Project

The available convertion specifiers are:
+ %c: Prints a character.
+ %s: Prints a string.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary (base two) representation of an unsigned decimal.
+ %u: Prints unsigned integers.
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters.
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters.
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## Usage
+ All the files are to be compiled on Ubuntu 14.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic  -WNo-format *.c`
+ Include the "main.h" header file on the functions using the _printf()

## Example

```

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a, b;
	char *str;

	str = "GF and Devesty";
	a = _printf("%r\n", "Godfred X Esther"); /*expected: rehtsE X derfdoG*/
	printf("%d\n", a); /*expected: 16*/

	b = _printf("%r\n", str); /*expected: ytseveD dna FG*/
	printf("%d\n", b); /*expected: 14*/
	return (0);
}

```
