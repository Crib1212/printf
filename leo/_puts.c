#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to stdout.
 * @str: Pointer to the string to print.
 *
 * Return: Number of characters written.
 */
int _puts(char *str)
{
	char *ptr = str;
	int count = 0;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
		count++;
	}

	return (count);
}
