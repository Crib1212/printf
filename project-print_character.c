#include "main.h"
/**
 * print_char - Prints any printable character.
 * @l: va_list arguments read in from _printf.
 * @f: Pointer to the 'flags_f' struct
 * that asecertains if a flag is passed to _printf.
 *
 * Return: Number of characters printed (always 1).
 */
int print_char(va_list l, flags_f *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
