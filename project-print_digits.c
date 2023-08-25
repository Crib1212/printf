#include "main.h"
/**
 * print_digits - Prints a signed integer with optional flag characters.
 * @ls: va_list of arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct to ascertain
 * if a flag is passed to _printf.
 *
 * Return: Number of characters printed.
 */
int print_digits(va_list ls, flags_t *fl)
{
	int n = va_arg(ls, int);
	int res = count_digit(n);

	if (fl->space == 1 && fl->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (fl->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n < 0)
	{
		res++;
		n = -n;
	}
	print_number(n);
	return (res);
}

/**
 * print_unsigned - Prints an unsigned integer.
 * @ls: va_list of arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct, but not used in this function.
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list ls, flags_t *fl)
{
	unsigned int u = va_arg(ls, unsigned int);
	char *str = convert(u, 10, 0);

	(void)fl;
	return (_puts(str));
}

/**
 * print_number - Helper function to print
 * the digits of an integer recursively.
 * @n: Integer to be printed.
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * count_digit - Returns the number of digits in an integer.
 * @c: Integer to evaluate.
 * Return: Number of digits.
 */
int count_digit(int c)
{
	unsigned int d = 0;
	unsigned int u = (c < 0) ? -c : c;

	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
