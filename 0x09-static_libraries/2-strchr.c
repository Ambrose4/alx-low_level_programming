#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 * Author - Ambrose
 */
char *_strchr(char *s, char c)
{
		int ai;

		while (1)
		{
			ai = *s++;
			if (ai == c)
			{
				return (s - 1);
			}
			if (ai == 0)
			{
				return (NULL);
			}
		}
}
