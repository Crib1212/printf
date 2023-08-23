#include "main.h"

/**
 * call_flag - Checks for flag modifiers in the format string
 * and turns on flags.
 *
 * @s: Character that holds the flag specifier.
 * @f: Pointer to the 'flags_f' struct where we turn the flags on.
 *
 * Return: 1 if a flag has been turned on, 0 otherwise.
 */
int call_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
