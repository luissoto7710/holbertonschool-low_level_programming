#include <stdio.h>
/**
* main - alphabet no q or e
*
* Return: always (0)
*/
int main(void)
{
	char abc;
	char x = 'q';
	char y = 'e';

	for (abc = 'a'; abc <= 'z'; abc++)
	if (abc != x && abc != y)
	{
		putchar(abc);

	}
		putchar('\n');

return (0);
}
