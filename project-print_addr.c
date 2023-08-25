#include "main.h"

/**
 * print_addr - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_addr(va_list l, flags_t *f)
{
	char *leo;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	leo = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(leo);
	return (count);
}
