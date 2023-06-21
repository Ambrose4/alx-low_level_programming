#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 * Author - Ambrose
 */
int main(int argc, char *argv[])
{
	int bytes, ai;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (ai = 0; ai < bytes; ai++)
	{
		if (ai == bytes - 1)
		{
			printf("%02hhx\n", arr[ai]);
			break;
		}
		printf("%02hhx ", arr[ai]);
	}
	return (0);
}
