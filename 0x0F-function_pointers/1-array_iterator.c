#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 * Author - Ambrose
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ai;

	if (!array || !action)
		return;

	for (ai = 0; ai < size; ai++)
		action(array[ai]);
}
