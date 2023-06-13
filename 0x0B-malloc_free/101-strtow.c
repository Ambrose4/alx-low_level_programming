#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 * Author - Ambrose
 */
int count_word(char *s)
{
	int flag, ck, wl;

	flag = 0;
	wl = 0;

	for (ck = 0; s[ck] != '\0'; ck++)
	{
		if (s[ck] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wl++;
		}
	}

	return (wl);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int ai, ky = 0, len = 0, words, cz = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (ai = 0; ai <= len; ai++)
	{
		if (str[ai] == ' ' || str[ai] == '\0')
		{
			if (cz)
			{
				end = ai;
				tmp = (char *) malloc(sizeof(char) * (cz + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[ky] = tmp - cz;
				ky++;
				cz = 0;
			}
		}
		else if (cz++ == 0)
			start = ai;
	}

	matrix[ky] = NULL;

	return (matrix);
}
