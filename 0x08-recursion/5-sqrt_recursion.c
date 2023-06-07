#include "main.h"

int actual_sqrt_recursion(int n, int ai);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - a function that returns the natural
 *  square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 * Author - Ambrose
 */
int actual_sqrt_recursion(int n, int ai)
{
	if (ai * ai > n)
		return (-1);
	if (ai * ai == n)
		return (ai);
	return (actual_sqrt_recursion(n, ai + 1));
}
