#include "main.h"

/**
 * count_digit - Returns the number of digits in an integer.
 * @c: Integer to evaluate.
 * Return: Number of digits.
 */
int count_digit(int c)
{
        unsigned int d = 0;
        unsigned int u = (c < 0) ? -c : c;

        while (u != 0)
        {
                u /= 10;
                d++;
        }
        return (d);
}
