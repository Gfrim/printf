#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdlib.h>

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


int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);
int print_String(va_list);
int print_pointer(va_list);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *);
char *_memcpy(char *, char *, unsigned int);
int print_unsgined_number(unsigned int);
int isNonAlphaNumeric(char);
char *convert(unsigned long int, int, int);
int _puts(char *);
int print_hex_aux(unsigned long int);
int hex_check(int, char);

#endif
