#include "main.h"

/**
 * put_char - prints just a character
 * @ch: character to be printed
 * Return: length of character
 */
int put_char(char ch)
{
	return (write(1, &ch, 1));
}

/**
 * print_str - printing a string literal points in the parameter
 * @arg_l: string to print
 * Return: the length of  string
 */
int print_str(va_list arg_l)
{
	int i = 0;
	char *str = va_arg(arg_l, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
		put_char(str[i++]);

	return (i);
}

/**
 * print_char - prints just the character
 * @arg_l: character to be printed
 * Return: length of char
 */
int print_ch(va_list arg_l)
{
	char ch = va_arg(arg_l, int);

	return (put_char(ch));
}

