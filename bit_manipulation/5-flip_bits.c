#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get
 * from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Description: Computes the number of bits that would need to be flipped to
 * convert the number @n to the number @m. This is achieved by performing an
 * XOR operation between @n and @m, and then counting the number of set bits
 * in the result.
 *
 * Return: The count of flipped bits required.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flips = 0;

	while (diff)
	{
		flips += diff & 1;
		diff >>= 1;
	}

	return (flips);
}

