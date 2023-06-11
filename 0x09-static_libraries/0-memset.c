#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 * Author -Ambrose
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ai;

	for (ai = 0; ai < n; ai++)
	{
		s[ai] = b;
	}

	return (s);
}
