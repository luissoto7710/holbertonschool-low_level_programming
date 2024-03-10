#include <stdio.h>
/**
 *main - Start of the program
 *@argc:Count the lines
 *@argv:Count the strings
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
