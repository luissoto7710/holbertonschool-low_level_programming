#include "main.h"
/**
 *_memset - description
 *@s: desc
 *@b: desc
 *@n: desc
 *Return: succ
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n-- > 0)
{
*ptr++ = b;
}
return (s);
}
