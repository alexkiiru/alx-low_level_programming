#include "main.h"

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: arguments vector of pointers to strings
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
