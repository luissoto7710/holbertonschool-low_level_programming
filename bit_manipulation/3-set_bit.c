#include "main.h"
#include <stdio.h>
/**
 * set_bit - desc
 * @n: the variable
 * @index: ind
 * Return: if it works 1
**/
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1UL << index;


	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;


	return (1);
}
