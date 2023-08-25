#include "main.h"

/**
 * set_print - Selects the appropriate printing function
 * based on the conversion specifier.
 *
 * @s: Character that holds the conversion specifier.
 *
 * Description: This function loops through the 'func_arr[]'
 * array of structures to find a matching conversion specifier
 * passed to _printf and returns in order to return the corresponding
 * printing function.
 *
 * Return: A pointer to the matching printing function,
 * or NULL if no match is found.
 */
int (*set_print(char s))(va_list, flags_t *)
{
	fo_handler func_arr[] = {
		{'i', print_digits},
		{'s', print_str},
		{'c', print_char},
		{'d', print_digits},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_HEX},
		{'b', print_bin},
		{'o', print_oct},
		{'R', encode_rot13},
		{'r', print_rev},
		{'S', print_non_printable},
		{'p', print_addr},
		{'%', print_percent}
		};
	int flag_count = 14;

	register int i;

	for (i = 0; i < flag_count; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
