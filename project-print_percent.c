#include "main.h"
/**
 * print_percent - Prints a percent symbol '%'.
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct, but not used in this function.
 *
 * Return: Number of characters printed (always 1).
 */
int print_percent(va_list ls, flags_t *fl)
{
	(void)ls;
	(void)fl;
	return (_putchar('%'));
}
