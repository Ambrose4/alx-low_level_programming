#include <stdio.h>

/**
 * main - A program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int N;

	for (N = 0; N < 10; N++)
		printf("%d", N);
	printf("\n");
	return (0);
}
