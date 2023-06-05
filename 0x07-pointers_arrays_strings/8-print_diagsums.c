#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 * Author - Ambrose
 */
void print_diagsums(int *a, int size)
{
	int ai;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (ai = 0; ai < size; ai++)
	{
		sum += a[(size * ai) + ai];
		sum1 += a[(size * (ai + 1)) - (ai + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
