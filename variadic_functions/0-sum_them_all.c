#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - return the sum of all its parameters
 *@n: number of extra params
 *Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;

	}
	va_end(args);

	return (sum);
}
