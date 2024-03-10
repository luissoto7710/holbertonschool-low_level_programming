#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to search.
 * @c: Character to locate.
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++);
return ('\0');
}
