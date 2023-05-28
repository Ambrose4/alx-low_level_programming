#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase,
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int z;
	char alp_l;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (alp_l = 'a'; alp_l <= 'f'; alp_l++)
	{
		putchar(alp_l);
	}
	putchar('\n');
	return (0);
}
