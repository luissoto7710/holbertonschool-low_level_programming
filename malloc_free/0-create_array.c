#include <stdlib.h>
#include "main.h"
/**
 *create_array - dec
 *@size: size
 *@c: type of char
 *Return: return
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0 || array == NULL)
{
	return (0);
}
for (i = 0; i < size; i++)
{
	array[i] = c;
}
array[i] = '\0';
return (array);
}
