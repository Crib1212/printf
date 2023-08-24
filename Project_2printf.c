#include "main.h"

/**
 * Format_spec - check the format format specifier
 * @str: The arg string
 * @len: a pointer to the length of char being printed
 * @str_pos: Current position in a strng
 * @arg_l: next arg to print
 * Return: the length of charprinted
 */
int format_spec(const char *str, int *len, int *str_pos, va_list arg_l)
{
	spec_conv fmt[] = {
		{'c', print_ch},
		{'d', print_int},
		{'i', print_int},
		{'s', print_str},
		{'u', print_unint},
		{'o', print_oct},
		{'b', print_bin},
		{'x', print_hex_l},
		{'X', print_hex_u},
		{'\0', NULL}};
	int pos = *str_pos, i = 0;

	while (fmt[i].c != '\0')
	{
		if (fmt[i].c == str[pos])
		{
			(*str_pos)++;
			*len += fmt[i].f(arg_l);
			return (*len);
		}
		else
			i++;
	}
	if (print_rem(str, str_pos, len) == -1)
		return (-1);
	return (*len);
}
