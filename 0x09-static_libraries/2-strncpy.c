#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 * Author - Ambrose
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ai;

	ai = 0;

	while (src[ai] != '\0' && ai < n)
	{
		dest[ai] = src[ai];
		ai++;
	}

	while (ai < n)
	{
		dest[ai] = '\0';
		ai++;
	}

	return (dest);
}
