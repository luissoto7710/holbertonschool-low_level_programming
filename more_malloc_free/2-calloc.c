#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocate memory for an array and initialize with zeros
 *@nmemb: number of elements in the array
 *@size: size in bytes of each element
 *
 *Return: pointer to the allocated memory or NULL on failure
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
