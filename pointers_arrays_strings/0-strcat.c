#include <stdio.h>
#include "main.h"
/**
 * strcat - description
 * @dest: pointer
 * @src: string
 * Return: success
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
