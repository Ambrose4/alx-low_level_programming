#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * Author - Ambrose
 */
unsigned int _strspn(char *s, char *accept)
{
	int ai, bj, cf, isMatch;

	cf = 0;

	for (ai = 0; s[ai] != '\0'; ai++)
	{
		isMatch = 0;
		for (bj = 0; accept[bj] != '\0'; bj++)
		{
			if (s[ai] == accept[bj])
			{
				cf++;
				isMatch = 1;
			}
		}
		if (isMatch == 0)
		{
			return (cf);
		}
	}

	return (0);
}
