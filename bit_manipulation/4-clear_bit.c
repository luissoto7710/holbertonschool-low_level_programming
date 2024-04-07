#include <stdio.h>
#include "main.h"

/**
 * clear_bit - desc
 * @n: var
 * @index: index
 *
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

