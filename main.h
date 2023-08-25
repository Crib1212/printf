<<<<<<< HEAD
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a

<<<<<<< HEAD
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
<<<<<<< HEAD


typedef struct format_handler
{
	char c;
	int (*f)(va_list ap, flags_f *f);
=======

typedef struct flags_format
{
        int plus;
        int hash;
        int space;
} flags_t;


typedef struct format_handler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a
} fo_handler;

int _printf(const char *format, ...);
int _putchar(char c);
<<<<<<< HEAD
int _puts(char *leo);
int (*set_print(char s))(va_list, flags_f *);
int call_flag(char s, flags_f *f);
int print_leo(va_list l, flags_f *f);
int print_char(va_list l, flags_f *f);
int print_digits(va_list l, flags_f *f);
=======
int _puts(char *str);
int (*set_print(char s))(va_list, flags_t *);
int call_flag(char s, flags_t *f);
int print_str(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_digits(va_list l, flags_t *f);
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a
void print_number(int n);
int print_unsigned(va_list l, flags_f *f);
int count_digit(int i);
int print_hex(va_list l, flags_f *f);
int print_HEX(va_list l, flags_f *f);
int print_bin(va_list l, flags_f *f);
int print_oct(va_list l, flags_f *f);
char *convert(unsigned long int num, int base, int lowercase);
<<<<<<< HEAD
int encode_rot13(va_list l, flags_f *f);
int print_rev(va_list l, flags_f *f);
int print_non_printable(va_list l, flags_f *f);
int print_addr(va_list l, flags_f *f);
int print_percent(va_list l, flags_f *f);

typedef struct flags_format
{
	int plus;
	int hash;
	int space;
} flags_f;
#endif
=======
>>>>>>> e79fdc5ecf647b39a05262a85532f0dcb080a5d6
=======
int encode_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_non_printable(va_list l, flags_t *f);
int print_addr(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
#endif
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a
