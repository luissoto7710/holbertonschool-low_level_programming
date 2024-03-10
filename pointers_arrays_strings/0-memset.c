#include <stdio.h>
#include "main.h"
/**
 * _memset - desc
 * @s: desc
 * @b: desc
 * @n: desc
 * Return: suc
 */
char *_memset(char *s, char b, unsigned int n)
{
    for(unsigned int i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}
