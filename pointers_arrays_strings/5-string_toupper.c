#include <stdio.h>
#include "main.h"
/**
 * string_toupper - desc
 * @u: desc
 * Return: desc
**/
char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] -= 32;
		}
	}
	return (u);
}
