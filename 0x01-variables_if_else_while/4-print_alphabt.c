#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase,
 * except q and e
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	char alp_l = 'a';

	while (alp_l <= 'z')
	{
		if (alp_l != 'e' && alp_l != 'q')
		{
			putchar(alp_l);
		}
		alp_l++;
	}
	putchar('\n');
	return (0);
}
