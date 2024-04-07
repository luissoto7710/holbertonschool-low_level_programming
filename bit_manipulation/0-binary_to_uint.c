#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of '0' and '1' chars
 *
 * Context: The string b is assumed to contain only '0's and '1's. This
 * function computes the decimal equivalent of the binary number represented
 * by the string.
 *
 * Return: the converted number, or 0 if:
 * - there is one or more chars in the string b that is not '0' or '1'
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return 0;

	while (*b) {
		num <<= 1;
		if (*b == '1')
			num += 1;
		else if (*b != '0')
			return 0;
		b++;
	}

	return num;
}

