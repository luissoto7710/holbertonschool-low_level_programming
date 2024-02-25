#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - alphabet but way too many times
*
*Return: void
*/
void print_alphabet_x10(void)
{
int i = 0;
char abc;

do {
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
i++;
_putchar('\n');
} while (i <= 9);
}
