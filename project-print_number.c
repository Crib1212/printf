#include "main.h"

/**
 * print_number - Helper function to print
 * the digits of an integer recursively.
 * @n: Integer to be printed.
 */
void print_number(int n)
{
        if (n / 10)
                print_number(n / 10);
        _putchar((n % 10) + '0');
}
