#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int ai, bj;

	for (ai = 0; haystack[ai] != '\0'; ai++)
	{
		for (bj = 0; needle[bj] != '\0'; bj++)
		{
			if (haystack[ai + bj] != needle[bj])
				break;
		}
		if (!needle[bj])
			return (&haystack[ai]);
	}
	return (NULL);
}
