#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: variable
 * Return: 0
 */

void print_diagonal(int n)
{
	int z;
	int x;
		if (n > 0)
		{
			for (z = 1; z <= n; z++)
			{
				for (x = 0; x < z; x++)
				{
					if (x != 0)
					{
						_putchar(' ');
					}
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
