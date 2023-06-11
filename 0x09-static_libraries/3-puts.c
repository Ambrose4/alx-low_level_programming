#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int ai;

	for (ai = 0; str[ai] != '\0'; ai++)
	{
		_putchar(str[ai]);
	}
	_putchar('\n');
}
