#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 * Author - Ambrose
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int ai, len;

	ai = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[ai] = str[ai]) != '\0')
		ai++;

	return (duplicate);
}
