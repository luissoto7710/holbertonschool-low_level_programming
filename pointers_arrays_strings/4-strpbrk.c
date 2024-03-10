#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - dec
 *@s: dec
 *@accept: dec
 *Return: dec
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
	char *currentAccept = accept;

	while (*currentAccept != '\0')
	{
		if (*s == *currentAccept)
		{
			return (s);
		}
		currentAccept++;
	}
	s++;
}
return ((char *)0);
}
