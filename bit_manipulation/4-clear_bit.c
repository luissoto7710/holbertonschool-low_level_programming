#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Clears the bit at a given index.
 * @n: Pointer to the number.
 * @index: The index of the bit to be cleared, starting from 0.
 *
 * Description: Sets the bit at position @index to 0. If @index is out of
 * bounds, the function returns -1. Otherwise, it returns 1.
 * Return: 1 if successful, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}

