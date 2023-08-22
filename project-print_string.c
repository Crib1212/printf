#include "main.h"

/**
 * print_leo- Print string
 * @fl: Pointer to flags_f
 *@ls: va_list argument
 * Return: Number of characters printed.
 */
int print_leo(va_list ls, flags_f *fl)
{
	char *s = va_arg(ls, char *);

	if (!s)
		s = "(null)";
	(void)fl;
	return (_puts(s));
}
