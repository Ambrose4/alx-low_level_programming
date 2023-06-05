#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 * Author - Ambrose
 */
char *_strpbrk(char *s, char *accept)
{
	int ai, bj;

	for (ai = 0; *s != '\0'; ai++)
	{
		for (bj = 0; accept[bj] != '\0'; bj++)
		{
			if (*s == accept[bj])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
