#include <stdio.h>

/**
 * main - A program that prints all single digit numbers
 * of base 10 starting from 0, using putchar
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int N;

	for (N = 48; N < 58; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
