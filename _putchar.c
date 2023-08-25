#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: character to print
 * Return: On success 1. On error, -1 is returned,
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int buffer_index;

	if (c == -1 || buffer_index >= 1023)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}

	if (c != -1)
	{
		buffer[buffer_index] = c;
		buffer_index++;
	}

	return (1);
}
