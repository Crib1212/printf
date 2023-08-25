#include "main.h"

/**
 * print_digits - prints a number
 * @flags_t : format to print number
 * @ls: va_list with number to print
 * Return: number of characters printed
 */

int print_digits(va_list ls, flags_t *fl)
{
	int n = va_arg(ls, int);
	int pe = count_digit(n);

	if (fl->space == 1 && fl->plus == 0 && n >= 0)
		pe += _putchar(' ');
	if (fl->plus == 1 && n >= 0)
		pe += _putchar('+');
	if (n < 0)
	{
		pe++;
		n = -n;
	}
	print_number(n);
	return (pe);
}
