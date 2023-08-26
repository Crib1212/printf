#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - Struct containing flags to "turn on"
 * when a flag specifier is passed to _printf().
 * @plus: Flag for the '+' character.
 * @space: Flag for the ' ' (space) character.
 * @hash: Flag for the '#' character.
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - Struct to choose the right function depending
 * on the format specifier passed to _printf().
 * @c: Format specifier character.
 * @f: Pointer to the correct printing function.
 */
typedef struct format_handler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} fo_handler;
int (*set_print(char s))(va_list, flags_t *);
int _printf(const char *format, ...);
int _putchar(char c);
int print_unsigned(va_list l, flags_t *f);
int _puts(char *str);
int call_flag(char s, flags_t *f);
int print_str(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_digits(va_list l, flags_t *f);
void print_number(int n);
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
#endif 
