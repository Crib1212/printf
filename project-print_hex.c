#include "main.h"

/**
 * print_hex - Prints a number in hexadecimal base, in lowercase.
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Description: The function calls convert() to convert the input number
 * into hexadecimal and returns it as a string.
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list ls, flags_t *fl)
{
	unsigned int num = va_arg(ls, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (fl->hash == 1 && str[0] != '0')
		count += _puts("0x");

	count += _puts(str);

	return (count);
}
