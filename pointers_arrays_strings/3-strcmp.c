#include "main.h"
#include <stdio.h>
/**
 *_strcmp - desc
 *@s1: desc
 *@s2: desc
 *Return: succ
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	s1++;
	s2++;
}
if (*s1 == '\0' && *s2 == '\0')
{
	return (0);
}
else
{
	return (*s1 - *s2);
}
}
