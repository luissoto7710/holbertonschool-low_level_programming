#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 
 * follwed by new line with the exception of 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int x = '2';
	int y = '4';
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != x && num != y)
		{
		_putchar(num);
		}
			_putchar('\n');
}
