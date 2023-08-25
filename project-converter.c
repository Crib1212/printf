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
char *convert(unsigned long int num, int base, int lwrcase)
{
	static char *rep;
	static char buff[50];
	char *ptr;

	rep = (lwrcase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buff[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
