#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: the array
 * @size: size of array
 * @p: p
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
if (array == NULL || action == NULL)
	return;
while (size-- > 0)
{
	action(*array);
	array++;
}
}
