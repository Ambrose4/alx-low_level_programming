#include <stdio.h>

/**
 * main - A program that prints all possible different
 * combinations of two digits
 * Return: ALways 0
 * Author - Ambrose
 */
int main(void)
{
	int j, k;

	for (j = 48; j <= 56; j++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > j)
			{
				putchar(j);
				putchar(k);
				if (j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
