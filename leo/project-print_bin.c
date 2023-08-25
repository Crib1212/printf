#include "main.h"
/**
 * print_bin - Prints a number in base 2 (binary).
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Description: The function calls convert() to convert the input number
 * to a binary number and returns it as a string.
 *
 * Return: The number of characters printed.
 */
int print_bin(va_list ls, flags_t *fl)
{
	unsigned int num = va_arg(ls, unsigned int);
	char *str = convert(num, 2, 0);

	(void)fl;
	return (_puts(str));
}
