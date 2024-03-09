#include <stdio.c>
#include "main.h"
/**
 * leet - desc
 * @s: desc
 * Return: succ
**/
char *leet(char *s)
{
	char *c = s;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = { 4, 3, 0, 7, 1 };
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
return (c);
}
