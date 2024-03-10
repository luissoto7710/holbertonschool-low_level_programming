#include "main.h"
#include <stdio.h>
int squarert(int n, int i);
/**
 *_sqrt_recursion - Start of the program00
 *@n: Number from output
 *Return:Square root of N
 */
int _sqrt_recursion(int n)
{
return (squarert(n, 1));
}
/**
 *squarert - Calculates the natural root of the number
 *@n: Number for calculate
 *@i: iterate number
 *Return: Natural square root
 */
int squarert(int n, int i)
{
int root = i * i;
if (root > n)
	return (-1);
if (root == n)
	return (i);
return (squarert(n, i + 1));
}
