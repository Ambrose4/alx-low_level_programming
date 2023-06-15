#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 * Author - Ambrose
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int ai = 0, bj = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (ai < len1)
	{
		s[ai] = s1[ai];
		ai++;
	}

	while (n < len2 && ai < (len1 + n))
		s[ai++] = s2[bj++];

	while (n >= len2 && ai < (len1 + len2))
		s[ai++] = s2[bj++];

	s[ai] = '\0';

	return (s);
}
