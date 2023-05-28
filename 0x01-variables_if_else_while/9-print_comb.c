#include <stdio.h>

/**
 * main - A program that prints all possible combinations
 * of single-digit numbers
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		putchar(s);
		if (s != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
