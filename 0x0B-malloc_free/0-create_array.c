#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 * Author - Ambrose
 */
char *create_array(unsigned int size, char c)
{
	char *ap;
	unsigned int ai = 0;

	if (size == 0)
		return (NULL);

	ap = (char *) malloc(sizeof(char) * size);

	if (ap == NULL)
		return (0);

	while (ai < size)
	{
		*(ap + ai) = c;
		ai++;
	}

	*(ap + ai) = '\0';

	return (ap);
}
