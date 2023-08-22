#include "main.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @leo: input string
 * Return: count of string.
 */
int _puts(char *leo)
{
         char *dts = leo;
        int count = 0;

        while (*dts)
        {
                _putchar(*dts);
                dts++;
                count++;
        }
        return (count);
}
