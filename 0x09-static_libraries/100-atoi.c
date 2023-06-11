#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 * Author - Ambrose
 */
int _atoi(char *s)
{
	int ai, bd, cn, len, df, digit;

	ai = 0;
	bd = 0;
	cn = 0;
	len = 0;
	df = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (ai < len && df == 0)
	{
		if (s[ai] == '-')
			++bd;

		if (s[ai] >= '0' && s[ai] <= '9')
		{
			digit = s[ai] - '0';
			if (bd % 2)
				digit = -digit;
			cn = cn * 10 + digit;
			df = 1;
			if (s[ai + 1] < '0' || s[ai + 1] > '9')
				break;
			df = 0;
		}
		ai++;
	}

	if (df == 0)
		return (0);

	return (cn);
}
