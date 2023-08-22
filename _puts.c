#include "main.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @leo: input string
 * Return: count of string.
 */
int _puts(char *leo)
{
	int count = 0;

	while (*leo)
	{
		_putchar(*leo);
		leo++;
		count++;
	}
	return (count);
}
