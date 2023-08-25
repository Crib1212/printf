#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @ls: va_list of arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct, but not used in this function.
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list ls, flags_t *fl)
{
        unsigned int u = va_arg(ls, unsigned int);
        char *leo = convert(u, 10, 0);

        (void)fl;
        return (_puts(leo));
}
