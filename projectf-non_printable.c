#include "main.h"

/**
 * print_non_printable - Prints all non-printable ASCII characters.
 *
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Return: The number of characters printed.
 */
int print_non_printable(va_list ls, flags_t *fl)
{
	int i, count = 0;
	char *pe;
	char *s = va_arg(ls, char *);

	(void)fl;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			pe = convert(s[i], 16, 0);
			if (!pe[1])
				count += _putchar('0');

			count += _puts(pe);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}
	return (count);
}
