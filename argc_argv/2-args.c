#include <stdio.h>
/**
 *main - Start of the program
 *@argc:Quantity of argument
 *@argv:Argument array
 *Return:0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= (argc - 1); i++)
	printf("%s\n", argv[i]);
return (0);
}
