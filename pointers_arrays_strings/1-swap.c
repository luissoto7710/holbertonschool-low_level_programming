#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps the values of integers
 * @a: first integer 
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
