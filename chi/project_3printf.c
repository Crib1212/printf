#include "main.h"

/**
 * print_rem - Helper function 
 * @s: A  string pointer to be printed
 * @str_pos: A pointer to the position of the strng
 * @len: a pointer to  len of the strng
 * Return: length of the string
 */
int print_rem(const char *s, int *str_pos, int *len)
{
	int i = *str_pos;

	if (s[i - 2] == '%')
		return (-1);
	*len += put_char(s[i - 1]);
	*len += put_char(s[i++]);

	*str_pos = i;
	return (*len);
}

