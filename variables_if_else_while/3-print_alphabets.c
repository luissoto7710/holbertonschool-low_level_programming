#include <stdio.h>
/**
 * main - alphabetic loop
 *
 * Return: always (0)
 */
int main(void)
{
	char abc;
	char UPP;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
	putchar(abc);
	}
	for (UPP = 'A'; UPP <= 'Z'; UPP++)
	{
	putchar(UPP);
	}
		putchar('\n');

return (0);

}
