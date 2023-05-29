#include "main.h"

/**
 * prints_alphabet - A program that prints alphabet in lowercase
 * Return:0
 * Author - Ambrose
 */

void print_alphabet(void)
{
	char alp_l = 'a';

	while (alp_l <= 'z')
	{
		_putchar(alp_l);
		alp_l++;

	}
	_putchar('\n');

}
