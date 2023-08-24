#include "main.h"
/**
 * convert - Takes an input number and base and
 * converts it into a string representation.
 *
 * @num: The input number to be converted.
 * @base: The input base for conversion.
 * @lwrcase: A flag indicating whether the hexadecimal values
 * should be in lowercase.
 *
 * Return: The resulting string representation after conversion.
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buff[50];
	char *dts;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	dts = &buff[49];
	dts = '\0';
	do {
		*--dts = rep[num % base];
		num /= base;
	} while (num != 0);

	return (dts);
}
