#include "main.h"
/**
 * print_oct - Prints a number in base 8 (octal)
 *
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Description: The function calls convert() function
 * to convert the input number
 * into the correct base and returns it as a string.
 *
 * Return: The number of characters printed.
 */
int print_oct(va_list ls, flags_t *fl)
{
	unsigned int num = va_arg(ls, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (fl->hash == 1 && str[0] != '0')
		count += _putchar('0');

	count += _puts(str);

	return (count);
}
