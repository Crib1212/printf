#include "main.h"

/**
 * print_int - prints int
 * @arg_l: arguments to print
 * Return: lenght of arguments
 */
int print_int(va_list arg_l)
{
	int n = va_arg(arg_l, int);
	int val_d, len = 0;

	if (n < 0)
	{
		len += put_char('-');
		if (n == INT_MIN)
			n = INT_MAX;
		else
			n *= -1;
	}

	val_d = (int) cal_val(n, 10);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= 10;
	}
	return (len);
}

/**
 * print_uninteger- prints int
 * @arg_l: args to be printed
 * Return: lenght of args
 */
int print_unint(va_list arg_l)
{
	unsigned int n = va_arg(arg_l, unsigned int);
	unsigned int val_d;
	int len = 0;

	val_d = (unsigned int) cal_val(n, 10);

	while (val_d)
	{
		len += put_char(n / val_d + '0');
		n %= val_d;
		val_d /= 10;
	}
	return (len);
}
