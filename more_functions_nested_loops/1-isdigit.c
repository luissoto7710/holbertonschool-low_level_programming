#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @c: digit that will be checked
 *
 * Return: 1 if digit is from 0-9
 */

int _isdigit(int c)
{
	if (c >= '0' && c<= '9')
	{
		return(1);
		}
	return(0);
}
