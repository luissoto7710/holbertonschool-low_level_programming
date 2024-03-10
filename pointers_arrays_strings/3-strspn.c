#include "main.h"
#include <stddef.h>
/**
 *_strspn - desc
 *@s:desc
 *@accept:desc
 *Return:succ
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
	char *currentAccept = accept;

	while (*currentAccept != '\0')
	{
		if (*s == *currentAccept)
		{
			count++;
			break;
		}
		currentAccept++;
	}
	if (*currentAccept == '\0')
	{
		break;
	}
	s++;
}
return (count);
}
