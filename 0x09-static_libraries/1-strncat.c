#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 * Author - Ambrose
 */
char *_strncat(char *dest, char *src, int n)
{
	int ai, bj;

	ai = 0;
	bj = 0;

	while (dest[ai] != '\0')
		ai++;

	while (src[bj] != '\0' && bj < n)
	{
		dest[ai] = src[bj];
		ai++;
		bj++;
	}

	dest[ai] = '\0';

	return (dest);
}
