#include <stdio.h>
#include "main.h"

/**
 * _strcpy - description
 * @dest: value
 * @src: value
 * Return: 0
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
