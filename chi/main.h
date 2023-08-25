#ifndef PRINT_F
#define PRINT_F

/* Files  in header.. */
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 ** struct format_handler - structure containing char and int
 ** @c: character for format specifier
 ** @f: to print the  function for a specific type.
 **struct flags - Struct containing flags to "turn on"
 **when a flag specifier is passed to _printf().
 ** @plus: Flag for the '+' character.
 ** @hash: Flag for the '#' character.
 ** @space: Flag for the ' ' (space) character.
 ** Return: int
 **/


/* Prototype of the function*/
int print_unint(va_list);
int print_hex_l(va_list);
int print_hex_u(va_list);
int _printf(const char *format, ...);
int put_char(char);
size_t cal_val(size_t n, int base);
int print_bin(va_list);
int format_spec(const char *, int *, int *, va_list);
int print_ch(va_list);
int print_int(va_list);
int print_oct(va_list);
int print_str(va_list);

/**
 * struct conv - Template for the format conversion
 * @c: the format of specifiers
 * @f: pointr to the corresponding func @c
 */
typedef struct conv spec_conv;
struct conv
{
	char c;

	int (*f)(va_list);
};

#define OCT 8
#define HEX 16
#define BIN 2


	int (*f)(va_list ap, flags_t *f);
} fo_handler;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *leo);
int (*set_print(char s))(va_list, flags_t *);
int call_flag(char s, flags_t *f);
int print_leo(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_digits(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_HEX(va_list l, flags_t *f);
int print_bin(va_list l, flags_t *f);
int print_oct(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int encode_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_non_printable(va_list l, flags_t *f);
int print_addr(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

typedef struct flags_format
{
	int plus;
	int hash;
	int space;
} flags_t;

#endif
