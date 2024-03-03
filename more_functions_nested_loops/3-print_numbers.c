#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 t0 9 followed by new line
 *
 * Return: 0 if successfull
 */

void print_numbers(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		_putchar (p);
	}
	_putchar ('\n');
}
