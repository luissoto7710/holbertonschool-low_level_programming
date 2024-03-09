#include "main.h"
#include <stdio.h>
/**
 *_strncpy - desc
 *@dest: desc
 *@src: desc
 *@n: desc
 *Return: succ
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *string1 = dest;
	char *string2 = src;

	while (*string2 != '\0' && n > 0)
	{
	*string1 = *string2;
	string1++;
	string2++;
	n--;
	}
while (n > 0)
{
	*string1 = '\0';
	string1++;
	n--;
}
	return (dest);
}
