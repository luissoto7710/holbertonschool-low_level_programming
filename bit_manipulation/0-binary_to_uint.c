#include "main.h"

/**
 * binary_to_uint - Convert a binary number in a string to an unsigned int.
 * @b: Pointer to a string containing a binary number ('0' and '1').
 *
 * Context: Assumes @b is a valid pointer to a string composed exclusively
 * of '0's and '1's, and calculates the decimal equivalent of the binary
 * number represented by the string.
 *
 * Return: The decimal equivalent of the binary number, or 0 for any
 * invalid input, including if @b is NULL or contains characters other
 * than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		num <<= 1;
		if (*b == '1')
			num += 1;
		else if (*b != '0')
			return (0);
		b++;
	}

	return (num);
}

