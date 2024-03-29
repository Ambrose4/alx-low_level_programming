#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 * Author - Ambrose
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ai;

	if (array && cmp)
	{
		for (ai = 0; ai < size; ai++)
		{
			if (cmp(array[ai]) != 0)
				return (ai);
		}
	}

	return (-1);
}
