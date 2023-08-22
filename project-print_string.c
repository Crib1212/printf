#include "main.h"

/**
 * print_str - Prints a string.
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that ascertains
 * if a flag is passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_str(va_list ls, flags_t *fl)
{
	char *s = va_arg(ls, char *);

	if (!s)
		s = "(null)";
	(void)fl;
	return (_puts(s));
}
