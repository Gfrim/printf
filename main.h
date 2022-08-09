#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct frmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct frmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct frmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct frmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list, char buffer[],
	int, int, int, int);
int print_string(va_list, char buffer[],
	int, int, int, int);
int print_percent(va_list, char,
	int, int, int, int);

/* Functions to print numbers */
int print_int(va_list, char buffer[],
	int, int, int, int);
int print_binary(va_list, char buffer[],
	int, int, int, int);
int print_unsigned(va_list, char buffer[],
	int, int, int, int);
int print_octal(va_list, char buffer[],
	int, int, int, int);
int print_hexadecimal(va_list, char buffer[],
	int, int, int, int);
int print_hexa_upper(va_list, char buffer[],
	int, int, int, int);

int print_hexa(va_list, char map_to[],
char buffer[], int, char, int, int, int);

/* Function to print non printable characters */
int print_non_printable(va_list, char buffer[],
	int, int, int, int);

/* Funcion to print memory address */
int print_pointer(va_list, char buffer[],
	int, int, int, int);

/* Funciotns to handle other specifiers */
int get_flags(const char *, int *);
int get_width(const char *, int *, va_list);
int get_precision(const char *, int *, va_list);
int get_size(const char *, int *);

/*Function to print string in reverse*/
int print_reverse(va_list, char buffer[],
	int, int, int, int);

/*Function to print a string in rot 13*/
int print_rot13string(va_list, char buffer[],
	int, int, int, int);

/* width handler */
int handle_write_char(char, char buffer[],
	int, int, int, int);
int write_number(int, int, char buffer[],
	int, int, int, int);
int write_num(int, char bff[], int, int, int,
	int, char, char);
int write_pointer(char buffer[], int, int,
	int, int, char, char, int);

int write_unsgnd(int, int,
char buffer[],
	int, int, int, int);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int, int);
long int convert_size_unsgnd(unsigned long int, int);

#endif /* MAIN_H */
