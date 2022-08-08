#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _printf(const char *, ...);
int _putchar(char);
int parser(const char *, conver_t, va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_char(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_String(va_list);
int print_pointer(va_list);
int print_rev(va_list);
int print_rot13(va_list);

int print_number(va_list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *);
char *_memcpy(char *, char *, unsigned int);
int print_unsgined_number(unsigned int);
int hex_check(int, char);
int print_hex_aux(unsigned long int);
int isNonAlphaNumeric(char);
int _puts(char *);
char *convert(unsigned long int, int, int);

#endif
