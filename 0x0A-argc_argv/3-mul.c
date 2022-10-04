#include "main.h"
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}

		printf("%d\n", res);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
