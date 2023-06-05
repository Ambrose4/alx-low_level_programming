#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 * Author - Ambrose
 */
void print_chessboard(char (*a)[8])
{
	int ai, bj;

	for (ai = 0; ai < 8; ai++)
	{
		for (bj = 0; bj < 8; bj++)
		{
			_putchar(a[ai][bj]);
		}
		_putchar('\n');
	}
}
