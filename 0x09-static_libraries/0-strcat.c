#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 * Author - Ambrose
 */
char *_strcat(char *dest, char *src)
{
	int ai, bj;

	ai = 0;
	bj = 0;

	while (dest[ai] != '\0')
		ai++;

	while (src[bj] != '\0')
	{
		dest[ai] = src[bj];
		bj++;
		ai++;
	}

	dest[ai] = '\0';

	return (dest);
}
