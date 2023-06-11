#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 * Author - Ambrose
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ai;

	for (ai = 0; ai < n; ai++)
	{
		dest[ai] = src[ai];
	}

	return (dest);
}
