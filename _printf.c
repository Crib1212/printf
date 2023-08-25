#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _printf - a custom function similar to the standard library function printf
 * It generates output based on a given format string.
 * @format: The format string containing characters and conversion specifiers.
 *
 * Description:
 * This function utilizes the set_print() function to determine
 * the appropriate printing function based on the conversion specifiers
 * added to the format string.
 *
 * Return: total length of string of the formatted output
 */

int _printf(const char *format, ...)
{
	int (*pr_funcs)(va_list, flags_t *);
	const char *ch;
	va_list arg_list;
	flags_t flags = {0, 0, 0};

	double count = 0;

	va_start(arg_list, format);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (ch = format; *ch; ch++)
	{
		if (*ch == '%')
		{
			ch++;
			if (*ch == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (call_flag(*ch, &flags))
				ch++;
			if (*ch == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (call_flag(*ch, &flags))
				ch++;
			pr_funcs = set_print(*ch);
			count += (pr_funcs)
				? pr_funcs(arg_list, &flags)
				: _printf("%%%c", *ch);
		} else
			count += _putchar(*ch);
	}
	_putchar(-1);
	va_end(arg_list);
	return (count);

}
