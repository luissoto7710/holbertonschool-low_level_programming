#include <stdio.h>
/**
* main - printing
*
* Return: always (0)
*/
int main(void)
{
	char num;
	char lett;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

	}
	for (lett = 'a'; lett <= 'f'; lett++)
{
		putchar(lett);
	}
		putchar('\n');

return (0);
}
