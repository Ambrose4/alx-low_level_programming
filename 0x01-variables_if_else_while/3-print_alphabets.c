#include <stdio.h>

/**
 * main -A program that prints the alphabet in lowercase,
 * and then in uppercase,followed by a new line
 * Return: Always 0
 * Author - Ambrose
 */
int main(void)
{
	int alp_l_u;

	for (alp_l_u = 'a'; alp_l_u <= 'z'; alp_l_u++)
		putchar(alp_l_u);
	for (alp_l_u = 'A'; alp_l_u <= 'Z'; alp_l_u++)
		putchar(alp_l_u);
	putchar('\n');
	return (0);
}
