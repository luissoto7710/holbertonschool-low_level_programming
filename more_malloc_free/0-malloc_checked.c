#include <stdlib.h>
/**
 * malloc_checked - desc
 * @b: b
 * Return: retrun 
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}
