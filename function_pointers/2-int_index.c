#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *int_index - program
 *@array: array
 *@size: size
 *@cmp: Function
 *Return: return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
		return (i);
}

return (-1);
}
