#include "main.h"
#include <stdio.h>
/**
*_abs - absolute value
*
*@ab: integer
*
*Return: absolute value
*/
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
