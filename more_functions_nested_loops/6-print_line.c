#include <stdio.h>
#include "main.h"

/**
 * print_line - draws straight line in terminal
 *
 * Return: 0
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
		else
		{
	_putchar('\n');
}
}
