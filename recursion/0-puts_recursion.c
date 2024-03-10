#include "main.h"
/**
 *_puts_recursion - dec
 *@s: dec
 */
void _puts_recursion(char *s)
{

if (s[0] != '\0')
{
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
else
_putchar('\n');
}
