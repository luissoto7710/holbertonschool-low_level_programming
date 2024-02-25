#include <stdio.h>
#include "holberton.h"
/**
*_abs - absolute
*
*@ab: input
*
*Return: absolut value
*/
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
