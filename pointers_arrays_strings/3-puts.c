#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints string
 * @str: The string 
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
