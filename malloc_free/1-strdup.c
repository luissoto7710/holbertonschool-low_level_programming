#include "main.h"
#include <stdlib.h>
/**
 *_strdup - def
 *@str: str
 *Return: NULL
 */
char *_strdup(char *str)
{
	int i;

	char *duplicate;

	int lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[lenght] != '\0')
	{
		lenght++;
	}

	duplicate = (char *)malloc(sizeof(char) * (lenght + 1));

	if (duplicate == NULL)
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		{
		duplicate[i] = str[i];
		}

		duplicate[i] = '\0';

		return (duplicate);

		}
