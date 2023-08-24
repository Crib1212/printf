#include "main h"

/**
 * cal_val - calc place of the 1st digit
 * @n: the num givien
 * @base: base of the number
 * Return: place value
 */
size_t cal_val(size_t n, int base)
{
	int place_val = 1;

	while (n >= (size_t)base)
	{
		place_val *= base;
		n /= base;
	}
	return (place_val);
}
