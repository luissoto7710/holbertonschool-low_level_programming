#include "main.h"
#include <stdio.h>

/**
 * get_bit - desc
 * @n: variable
 * @index: other variable
 * Return: -1, 1, and 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
