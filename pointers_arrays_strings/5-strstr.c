#include "main.h"
/**
 *_strstr - dec 
 *@haystack: dec
 *@needle: dec
 *Return: succ
 *
 */
char *_strstr(char *haystack, char *needle)
{
const char *h;
const char *n;
n = needle;
if (*n == 0)
{
	return (haystack);
}
for (; *haystack != 0; haystack += 1)
{
	if (*haystack != *n)
	{
		continue;
	}
	h = haystack;
	while (1)
	{
		if (*n == 0)
		{
			return (haystack);
		}
		if (*h++ != *n++)
		{
			break;
		}
	}
	n = needle;
}
return ('\0');
}
