#include "main.h"
/**
 * encode_rot13 - Prints a string using rot13.
 * @ls: List of arguments from _printf.
 * @fl: Pointer to the 'flags_t' struct that determines
 * if a flag is passed to _printf.
 *
 * Return: Length of the printed string.
 */
int encode_rot13(va_list ls, flags_f *fl)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(ls, char *);

	(void)fl;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
		{
			_putchar(s[j]);
		}
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
				{
					_putchar(ROT13[i]);
					break;
				}
			}
		}
	}

	return (j);
}
