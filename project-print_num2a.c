#include "main.h"

/**
 * print_oct - prints decimal digits in octal form
 * @arg_l: arguments passed
 * Return: octal digits
 */
int print_oct(va_list arg_l)
{
	unsigned int n = va_arg(arg_l, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = cal_val(n, OCT);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= OCT;
	}
	return (len);
}

