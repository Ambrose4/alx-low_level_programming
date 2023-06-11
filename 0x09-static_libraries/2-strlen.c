#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 * Author - Ambrose
 */
int _strlen(char *s)
{
	int ai;

	ai = 0;

	while (s[ai] != '\0')
	{
		ai++;
	}

	return (ai);
}
