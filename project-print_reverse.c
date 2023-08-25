#include "main.h"
/**
 * print_rev - Prints any given string in reverse.
 * @ls: Argument from _printf.
 * @fl: Pointer to the 'flags_t' struct that ascertains
 * if a flag is passed to _printf.
 *
 * Return: The length of the printed string.
 */
int print_rev(va_list ls, flags_t *fl)
{
	int x = 0, y;
	char *s = va_arg(ls, char *);

	(void)fl;
	if (!s)
		s = "(null)";

	while (s[x])
		x++;

	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);

	return (x);
}
