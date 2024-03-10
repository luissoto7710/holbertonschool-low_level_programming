#include "main.h"
#include <stdio.h>
int prime_recursion(int n, int divi);
/**
 *is_prime_number - Start of the program
 *@n: Is the number from the input
 *Return: If the number is a prime
 *
 */
int is_prime_number(int n)
{
return (prime_recursion(n, 2));
}
/**
 *prime_recursion - Calculates the prime number
 *@n: The number to calculate
 *@divi: find the prime
 *Return: If the number is a prime
 */
int prime_recursion(int n, int divi)
{
if (n <= 1)
	return (0);
if (divi * divi > n)
	return (1);
if (n % divi == 0)
	return (0);
return (prime_recursion(n, divi + 1));
}
