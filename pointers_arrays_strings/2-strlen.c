#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of string.
 * @str: string 
 *
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
