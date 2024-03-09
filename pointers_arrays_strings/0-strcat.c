#include "main.h"
#include <stdio.h>
/**
 *_strcat - desc
 *@dest: desc
 *@src: desc
 * Return: succ
 */
char *_strcat(char *dest, char *src)
{
char *string1 = dest;
char *string2 = src;

while (*string1 != '\0')
{
	string1++;
}
while (*string2 != '\0')
{
	*string1 = *string2;
	string1++;
	string2++;
}
*string1 = '\0';

return (dest);
}
