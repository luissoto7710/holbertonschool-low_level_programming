#include <stdio.h>
#include "main.h"
/**
*_islower - im tired bruh
*
*@c: the char is to be checked
*
*Return: 1 for lowercase and 0 for anything that is not lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
