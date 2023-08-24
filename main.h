#ifndef PRINT_F
#define PRINT_F

/* Files  in header.. */
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

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

