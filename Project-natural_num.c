#include "main.h"

/**
 * print_bin - prints Binary digit
 * @arg_l: decimal args printed in binary
 * Return: Binary of value of  argument
 */
int print_bin(va_list arg_l)
{
	unsigned int n = va_arg(arg_l, unsigned int);
	unsigned long val_d;
	int len = 0;

	val_d = (unsigned long) cal_val(n, BIN);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= BIN;
	}
	return (len);
}
