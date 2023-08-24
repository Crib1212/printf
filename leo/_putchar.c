#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: character to print
 * Return: On success 1. On error, -1 is returned,
 */

int _putchar(char c)
{
	static int cont;
	static char buffer[1024];

	if (c == -1)
	{
		cont = 0;
		return (0);
	}
	if (c == -2 || cont == 1024)
	{
		write(1, buffer, cont);
		cont = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[cont] = c;
		cont++;
		return (1);
	}
	return (0);

}
