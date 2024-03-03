#include <stdio.h>
#include "main.h"

/**
*_isupper - will return 1 if c is uppercase
*@c: character that is being checked
*
*Return: 1 if the character is uppercase if not return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
		}
	return (0);
}
