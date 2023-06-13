#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  *Author - Ambrose
  */
char *argstostr(int ac, char **av)
{
	int ai, bj, ck, size;
	char *arg;

	size = 0;
	ck = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	ai = 0;
	while (ai < ac)
	{
		bj = 0;
		while (av[ai][bj])
		{
			size++;
			bj++;
		}
		size++;
		ai++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	ai = 0;
	while (ai < ac)
	{
		bj = 0;
		while (av[ai][bj])
		{
			arg[ck] = av[ai][bj];
			bj++;
			ck++;
		}
		arg[ck] = '\n';
		ck++;
		ai++;
	}
	arg[ck] = '\0';
	return (arg);
}
