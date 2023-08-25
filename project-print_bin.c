#include "main.h"
<<<<<<< HEAD

/**
 * print_hex - Prints a number in hexadecimal base, in lowercase.
=======
/**
 * print_bin - Prints a number in base 2 (binary).
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a
 * @ls: va_list arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Description: The function calls convert() to convert the input number
<<<<<<< HEAD
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
=======
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
>>>>>>> b576c3b374aa72ff176e155ba0aec9f84b93b41a
}
