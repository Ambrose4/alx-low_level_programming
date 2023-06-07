#include "main.h"

int actual_prime(int n, int ai);

/**
 * is_prime_number - a function that returns 1 ,
 * if the input integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 * Author - Ambrose
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @ai: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int ai)
{
	if (ai == 1)
		return (1);
	if (n % ai == 0 && ai > 0)
		return (0);
	return (actual_prime(n, ai - 1));
}
