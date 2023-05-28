#include <stdio.h>

/**
 * main -  A program that prints all possible
 * combinations of two two-digit numbers
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int l, j;

	for (l = 0; l < 100; l++)
	{
		for (j = 0; j < 100; j++)
		{
			if (l < j)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (l != 98 || j != 99)
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
