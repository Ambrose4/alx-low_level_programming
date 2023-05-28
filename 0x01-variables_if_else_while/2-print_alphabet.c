#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return: Always 0
 * Author -Ambrose
 */
int main(void)
{
	char alp_l;

	for (alp_l = 'a'; alp_l <= 'z'; alp_l++)
	{
		putchar(alp_l);
	}
	putchar('\n');
	return (0);
}
