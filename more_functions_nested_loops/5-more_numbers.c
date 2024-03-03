#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14
 * 10 times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0;

	char j;

	do {
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	} while (i <= 9);
}
