#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 * Author - Ambrose
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int ai, bj;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (ai = 0; ai < height; ai++)
	{
		arr[ai] = (int *) malloc(sizeof(int) * width);
		if (arr[ai] == NULL)
		{
			free(arr);
			for (bj = 0; bj <= ai; bj++)
				free(arr[bj]);
			return (NULL);
		}
	}

	for (ai = 0; ai < height; ai++)
	{
		for (bj = 0; bj < width; bj++)
		{
			arr[ai][bj] = 0;
		}
	}
	return (arr);
}
