#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 * Return: 0
 */

void print_square(int size)
{
	int y, x;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
				_putchar('#');

			if (y == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
