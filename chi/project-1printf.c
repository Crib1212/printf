#include "main.h"

int print_rem(const char *, int *, int *);
/**
 * _printf - output produced are formatted 
 * @format: char strng to format& print
 * Return: Length output to be formatted 
 */
int _printf(const char *format, ...)
{
	va_list arg_l;
	int pos = 0, len = 0;

	if (!format)
		return (-1);

	va_start(arg_l, format);
	while (format[pos])
	{
		if (format[pos] == '%')
		{
			pos++;
			if (format[pos] == '\0')
				return (-1);
			if (format[pos] == '%')
				len += put_char(format[pos++]);
			else
				if (format_spec(format, &len, &pos, arg_l) == -1)
					return (-1);
		}
		else
			len += put_char(format[pos++]);
	}
	va_end(arg_l);
	return (len);
}

