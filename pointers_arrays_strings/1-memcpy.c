#include "main.h"
#include <stdio.h>
/**
 * _memcpy - desc
 * @dest: desc
 * @src: desc
 * @n: desc
 * Return: succ
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
